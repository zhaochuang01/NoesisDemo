////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include <NsCore/Memory.h>
#include <NsCore/BaseRefCounted.h>
#include <NsCore/FixedAllocator.h>
#include <NsCore/MemoryAllocator.h>


namespace eastl
{

////////////////////////////////////////////////////////////////////////////////////////////////////
PoolAllocator::PoolAllocator(const char*)
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////
PoolAllocator::PoolAllocator(const PoolAllocator&)
{
}

////////////////////////////////////////////////////////////////////////////////////////////////////
PoolAllocator& PoolAllocator::operator=(const PoolAllocator&)
{
    return *this;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void PoolAllocator::Init(Noesis::Core::MemoryAllocator* allocator, NsSize nodeSize, NsSize nodeCount)
{
    mFixedAllocator.Initialize(allocator, nodeSize, nodeSize * nodeCount);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void PoolAllocator::Init(NsSize nodeSize, NsSize nodeCount)
{
    mFixedAllocator.Initialize(nodeSize, nodeSize * nodeCount);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void* PoolAllocator::allocate(size_t n, int)
{
    if (n == mFixedAllocator.GetBlockSize())
    {
        return mFixedAllocator.Allocate();
    }
    else
    {
        return mFixedAllocator.GetMemoryAllocator()->Alloc(n);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void* PoolAllocator::allocate(size_t n, size_t, size_t, int flags)
{
    return allocate(n, flags);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
void PoolAllocator::deallocate(void* p, size_t n)
{
    if (n == mFixedAllocator.GetBlockSize())
    {
        mFixedAllocator.Deallocate(p);
    }
    else
    {
        mFixedAllocator.GetMemoryAllocator()->Dealloc(p);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
Noesis::Core::MemoryAllocator* PoolAllocator::GetMemoryAllocator() const
{
    return mFixedAllocator.GetMemoryAllocator();
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NsBool operator==(const PoolAllocator&, const PoolAllocator&)
{
    return false;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
NsBool operator!=(const PoolAllocator&, const PoolAllocator&)
{
    return true;
}

}
