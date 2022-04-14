#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
template <typename T>void iter(T arr[], std::size_t len, T(*fun)(T)) {
	for (std::size_t i = 0; i < len; i ++) {
		arr[i] = fun(arr[i]);
	}
}

#endif
