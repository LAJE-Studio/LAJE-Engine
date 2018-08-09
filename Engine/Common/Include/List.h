#pragma once

#include <cstdlib>
#include "CommonTypes.h"

template<typename T>
class List;


// TODO: Implement
template<typename T>
class List {
private:
    T *ptr;
    uint32 length;
    uint32 allocated;
    uint32 reallocationAmount;
public:
    static const uint32 DefaultAllocationSize = 10;
    static const uint32 DefaultReallocationSize = 5;

    explicit List<T>(uint32 preallocateSize = DefaultAllocationSize, uint32 reallocateAmount = DefaultReallocationSize);

    ~List();

    /**
     *
     * @param index
     * @return nullptr if
     */
    T *Get(uint32 index) const;

    void Add(T obj);

    void Add(T *obj);

    T *Remove(uint32 index);

    const uint32 GetLength() const;

    const bool IsOutOfBounds(uint32 index) const;

    T *begin();

    T *end();

private:
    void Resize();

    void Resize(uint32 allocationAmount);
};

template<typename T>
const uint32 List<T>::GetLength() const {
    return length;
}

template<typename T>
T *List<T>::Get(uint32 index) const {
    if (IsOutOfBounds(index)) {
        return nullptr;
    }
    return ptr + index;
}

template<typename T>
List<T>::List(uint32 preallocateSize, uint32 reallocateAmount) {
    ptr = (T *) malloc(preallocateSize * sizeof(T *));
    length = 0;
    allocated = preallocateSize;
}

template<typename T>
void List<T>::Add(T *obj) {
    Add(*obj);
}

template<typename T>
void List<T>::Add(T obj) {
    if (length == allocated) {
        Resize();
    }
    *(ptr + length) = obj;
    length++;
}

template<typename T>
void List<T>::Resize(uint32 allocationAmount) {
    ptr = (T *) realloc(ptr, allocated += allocationAmount);
}

template<typename T>
T *List<T>::Remove(uint32 index) {
    if (IsOutOfBounds(index)) {
        return nullptr;
    }
    for (int i = ++index; i < length; ++i) {
        *(ptr + (i - 1)) = *(ptr + i);
    }
}

template<typename T>
const bool List<T>::IsOutOfBounds(uint32 index) const {
    return index >= length;
}

template<typename T>
T *List<T>::begin() {
    return ptr;
}

template<typename T>
T *List<T>::end() {
    return (ptr + (length - 1));
}

template<typename T>
void List<T>::Resize() {
    Resize(reallocationAmount);
}

template<typename T>
List<T>::~List() {
    free(ptr);
}
