#ifndef SWAP_HPP
#define SWAP_HPP

template <typename T>void swap(T &a1, T&a2) {
	T s = a1;
	a1 = a2;
	a2 = s;
}

#endif
