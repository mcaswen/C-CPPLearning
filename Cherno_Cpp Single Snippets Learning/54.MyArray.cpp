#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <cstddef>

template<typename T, size_t SIZE>
class MyArray
{
public:
    constexpr MyArray() noexcept = default;
    
    // Index
    constexpr T& operator[](std::size_t index) noexcept
    {
        return m_Data[index];
    }

    constexpr const T& operator[](std::size_t index) const noexcept
    {
        return m_Data[index];
    }

    constexpr T& at(std::size_t index) 
    {
        if (index >= SIZE) throw std::out_of_range("MyArray::at");
        return m_Data[index];
    }

    constexpr const T& at(std::size_t index) const 
    {
        if (index >= SIZE) throw std::out_of_range("MyArray::at");
        return m_Data[index];
    }

    constexpr std::size_t Size() const noexcept
    {
        return SIZE;
    }

    constexpr bool empty() noexcept
    {
        return SIZE == 0;
    }

    // Iterators
    constexpr T* begin() noexcept 
    {
        return m_Data;
    }

    constexpr const T* begin() const noexcept 
    {
        return m_Data;
    }

    constexpr const T* cbegin() const noexcept 
    {
        return m_Data;
    }

    constexpr T* end() noexcept 
    {
        return m_Data + SIZE;
    }
    
    constexpr const T* end() const noexcept 
    {
        return m_Data + SIZE;
    }

    constexpr const T* cend() const noexcept 
    {
        return m_Data + SIZE;
    }
    
    // Data
    constexpr T* Data() noexcept
    {
        return m_Data;
    }

    constexpr const T* Data() const noexcept
    {
        return m_Data;
    }
    
    // Methods
    void fill(T value)
    {
        std::fill_n(m_Data, SIZE, value);
    }
    void clear()
    {
        std::fill_n(m_Data, SIZE, T{});
    }

private:
    T m_Data[SIZE]{};
   
};
