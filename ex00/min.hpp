#ifndef MIN_HPP
#define MIN_HPP

template <typename T>T min(T &a1, T&a2) {
	if (a1 < a2)
		return a1;
	return a2;
}

#endif
