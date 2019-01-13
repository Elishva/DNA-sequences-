#ifndef __SHAREDPTR_H__
#define __SHAREDPTR_H__

#include <stddef.h>
#include <iostream>



template<typename T>
class SharedPtr
{
    public:
        template<class U>
        friend class SharedPtr;

        explicit SharedPtr(T* = NULL);
        SharedPtr(const SharedPtr &);

        template<class U>
        SharedPtr(const SharedPtr<U> &);

        ~SharedPtr();

        T* operator->() const;
        T& operator*()  const;

        SharedPtr& operator= (const SharedPtr&);
        SharedPtr& operator= (T*);

        bool operator!=(const SharedPtr&) const;
        bool operator==(const SharedPtr&) const;

        operator bool() const;

        T* get() const;
        size_t getRefCount();


    private:
        void release();
        void init();

        T * m_ptr;
        size_t * refCount;
};


template<typename T>
SharedPtr<T>::SharedPtr(T * ptr)
{
    try
    {
        m_ptr = ptr;
        init();
    }
    catch (std::bad_alloc&e)
    {
        delete ptr;
        throw;
    }

}

template<typename T>
void SharedPtr<T>::init()
{
    refCount = new size_t;
    (*refCount) = 1;
}

template<typename T>
SharedPtr<T>::SharedPtr(const SharedPtr & pointer)
{
    m_ptr = pointer.m_ptr;
    refCount = pointer.refCount;
    ++(*refCount);
}

template<typename T>
template<class U>
SharedPtr<T>::SharedPtr(const SharedPtr<U> & pointer)
{
    m_ptr = pointer.m_ptr;
    refCount = pointer.refCount;
    ++(*refCount);
}

template<typename T>
SharedPtr<T>::~SharedPtr()
{
    release();
}

template<typename T>
void SharedPtr<T>::release()
{
    --(*refCount);

    if (*refCount == 0)
    {
        delete m_ptr;
        delete refCount;
    }

}

template<typename T>
T* SharedPtr<T>::get() const
{
    return m_ptr;
}

template<typename T>
size_t SharedPtr<T>::getRefCount()
{
    return *refCount;
}

template<typename T>
SharedPtr<T>& SharedPtr<T>::operator=(const SharedPtr&other)
{
    if (this != &other)
    {
        release();
        m_ptr = other.m_ptr;
        refCount = other.refCount;
        ++(*refCount);

    }

    return *this;
}

template<typename T>
SharedPtr<T>& SharedPtr<T>::operator=(T * other)
{
    release();
    try
    {
        m_ptr = other;
        init();
    }
    catch (std::bad_alloc&e)
    {
        delete other;
        throw;
    }
    return *this;
}

template<typename T>
T& SharedPtr<T>::operator*() const
{
    return *m_ptr;
}

template<typename T>
T* SharedPtr<T>::operator->() const
{
    return m_ptr;
}

template<typename T>
bool SharedPtr<T>::operator!=(const SharedPtr & ptr) const
{
    return ptr.m_ptr != m_ptr && ptr.refCount != refCount;
}

template<typename T>
bool SharedPtr<T>::operator==(const SharedPtr & ptr) const
{
    return ptr.m_ptr == m_ptr && ptr.refCount == refCount;
}

template<typename T>
SharedPtr<T>::operator bool() const
{
    return m_ptr!=NULL;
}


#endif //__SharedPtr_SharedPtr_H__
