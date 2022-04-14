#ifndef MAX_HPP
#define MAX_HPP

template <typename T>T max(T &a1, T&a2) {
	if (a1 > a2)
		return a1;
	return a2;
}

#endif
