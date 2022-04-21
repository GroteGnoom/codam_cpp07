#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <iostream>

template <typename T> class Array {
	public:
		Array() : _size(0), _data(NULL) {}
		Array(unsigned int n) : _size(n), _data(new T[n]()) {}
		~Array() {
			delete[] _data;
		}
		Array(const Array &array) : _size(array._size), _data(new T[_size]) {
			std::copy(array._data, array._data + array._size, _data);
		}
		Array operator=(const Array &array) {
			_size = array._size;
			delete[] _data;
			_data = new T[_size];
			std::copy(array._data, array._data + array._size, _data);
		}
		T &operator[](unsigned int idx) {
			if (idx < 0 || idx >= _size)
				throw std::out_of_range("array");
			return _data[idx];
		}
		unsigned int size() { return _size;}
	private:
		unsigned int _size;
		T *_data;
};


#endif
