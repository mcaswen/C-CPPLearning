#include <type_traits>

template <typename T>
typename std::remove_reference_t<T>::type&& move(T&& arg) noexcept
{
	return static_cast<typename std::remove_reference_t<T>::type&&>(arg);
}