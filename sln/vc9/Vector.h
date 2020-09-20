#pragma once
#include <iostream>
#include"Rational.h"
#include<cmath>
#include<stdlib.h>
template <class T>
class Vector
{
private:
	T* mas;
	int size;
public:
	Vector();
	Vector(int s);
	Vector(const Vector& v);
	~Vector();
	int GetS()
	{
		return size;
	}
	Vector& operator = (const Vector& v);
	bool operator == (const Vector& v);
	bool operator != (const Vector& v);
	T& operator [](int const pos);
	Vector<T>& vvod();
	//скалярные операции
	Vector operator +(const T& x);
	Vector& operator += (const T& x);
	friend Vector operator + (const T& x, const Vector& v)
	{
		Vector<T> res(v.size);
		for (int i = 0; i < res.size; i++)
		{
			res.mas[i] = v.mas[i] + x;
		}
		return res;
	}
	Vector operator -(const T& x);
	Vector& operator -= (const T& x);
	Vector operator *(const T& x);
	Vector& operator *= (const T& x);
	friend Vector operator * (const T& x, const Vector& v)
	{
		Vector<T> res(v.size);
		for (int i = 0; i < res.size; i++)
		{
			res.mas[i] = v.mas[i] * x;
		}
		return res;
	}
	Vector operator /(const T& x);
	Vector& operator /= (const T& x);
	//векторные операции
	Vector operator+ (const Vector& v);
	Vector& operator+=(const Vector& v);
	Vector operator-(const Vector& v);
	Vector& operator-=(const Vector& v);
	//скалярное произведение 
	T operator *(const Vector& v);
	//Ввод/вывод
	friend std::istream& operator >>(std::istream& is, Vector& v)
	{
		for (int i = 0; i < v.size; i++)
		{
			is >> v.mas[i];
		}
		return is;
	}
	friend std::ostream& operator <<(std::ostream& os, const Vector& v)
	{
		for (int i = 0; i < v.size; i++)
		{
			os << v.mas[i];
			std::cout << std::endl;
		}
		return os;
	}
};
template<class T>
Vector<T>& Vector<T>::vvod()
{
	double max, min;
	std::cout << "Выберите диапазон значений" << std::endl;
	std::cout << "min=";
	std::cin >> min;
	std::cout << "max=";
	std::cin >> max;
	while (min > max)
	{
		std::cout << "Диапазон значений введен неверно (min должно быть меньше max). Повторите ввод." << std::endl;
		std::cout << "min=";
		std::cin >> min;
		std::cout << "max=";
		std::cin >> max;
	}
	for (int i = 0; i < size; i++)
	{
		mas[i] = min + (max - min) * (T)rand() / RAND_MAX;
	}
	return (*this);
}
Vector<Rational>& Vector<Rational>::vvod()
{
	Rational max, min;
	std::cout << "Выберите диапазон значений" << std::endl << "min=" << std::endl;
	std::cin >> min;
	std::cout << "max=" << std::endl;
	std::cin >> max;
	while (min > max)
	{
		std::cout << "Диапазон значений введен неверно (min должно быть меньше max). Повторите ввод." << std::endl;
		std::cout << "min=" << std::endl;
		std::cin >> min;
		std::cout << "max=" << std::endl;
		std::cin >> max;
	}
	for (int i = 0; i < size; i++)
	{
		mas[i] = random(min, max);
	}
	return (*this);
}
template <class T>
Vector<T>::Vector()
{
	size = 5;
	mas = new T[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = 0;
	}
}
template <class T>
Vector<T>::Vector(int s)
{
	if (s < 1)
	{
		throw s;
	}
	size = s;
	mas = new T[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = 0;
	}
}
template <class T>
Vector<T>::Vector(const Vector<T>& v)
{
	mas = new T[v.size];
	size = v.size;
	for (int i = 0; i < size; i++)
	{
		mas[i] = v.mas[i];
	}
}
template <class T>
Vector<T>::~Vector(void)
{
	delete[]mas;
}
template <class T>
Vector<T>& Vector<T>:: operator =(const Vector<T>& v)
{
	delete[] mas;
	size = v.size;
	mas = new T[size];
	for (int i = 0; i < size; i++)
	{
		mas[i] = v.mas[i];
	}
	return (*this);
}
template <class T>
bool Vector<T>::operator ==(const Vector<T>& v)
{
	if (size != v.size)
	{
		return false;
	}
	for (int i = 0; i < size; i++)
	{
		if (mas[i] != v.mas[i])
		{
			return false;
		}
	}
	return true;
}
template<class T>
bool Vector<T>::operator !=(const Vector<T>& v)
{
	if (size != v.size)
	{
		return true;
	}
	for (int i = 0; i < size; i++)
	{
		if (mas[i] != v.mas[i])
		{
			return true;
		}
	}
	return false;
}
template <class T>
T& Vector<T>::operator[](int pos)
{
	if (pos < 0 || pos >= size)
	{
		throw pos;
	}
	return mas[pos];
}
template <class T>
Vector<T> Vector<T>::operator +(const T& x)
{
	Vector<T> v(size);
	for (int i = 0; i < v.size; i++)
	{
		v.mas[i] = mas[i] + x;
	}
	return v;
}
template <class T>
Vector<T>& Vector<T>:: operator+=(const T& x)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] += x;
	}
	return (*this);
}
template <class T>
Vector<T> Vector<T>::operator -(const T& x)
{
	Vector<T> v(size);
	for (int i = 0; i < v.size; i++)
	{
		v.mas[i] = mas[i] - x;
	}
	return v;
}
template <class T>
Vector<T>& Vector<T>:: operator-=(const T& x)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] -= x;
	}
	return (*this);
}
template <class T>
Vector<T> Vector<T>::operator *(const T& x)
{
	Vector<T> v(size);
	for (int i = 0; i < v.size; i++)
	{
		v.mas[i] = mas[i] * x;
	}
	return v;
}
template <class T>
Vector<T>& Vector<T>:: operator*=(const T& x)
{
	for (int i = 0; i < size; i++)
	{
		mas[i] *= x;
	}
	return (*this);
}
template<class T>
Vector<T> Vector<T>::operator / (const T& x)
{
	if (x == 0)
	{
		throw x;
	}
	Vector<T> v(size);
	for (int i = 0; i < v.size; i++)
	{
		v.mas[i] = mas[i] / x;
	}
	return v;
}
template <class T>
Vector<T>& Vector<T>:: operator/=(const T& x)
{
	if (x == 0)
	{
		throw x;
	}
	for (int i = 0; i < size; i++)
	{
		mas[i] /= x;
	}
	return (*this);
}

template <class T>
Vector<T> Vector<T>::operator +(const Vector<T>& v)
{
	if (size != v.size)
	{
		throw v.size;
	}
	Vector<T> res(size);
	for (int i = 0; i < size; i++)
	{
		res.mas[i] = mas[i] + v.mas[i];
	}
	return res;
}
template <class T>
Vector<T>& Vector<T>::operator+=(const Vector<T>& v)
{
	if (size != v.size)
	{
		throw v.size;
	}
	for (int i = 0; i < size; i++)
	{
		mas[i] += v.mas[i];
	}
	return (*this);
}
template <class T>
Vector<T> Vector<T>::operator -(const Vector<T>& v)
{
	if (size != v.size)
	{
		throw v.size;
	}
	Vector<T> res(size);
	for (int i = 0; i < size; i++)
	{
		res.mas[i] = mas[i] - v.mas[i];
	}
	return res;
}
template <class T>
Vector<T>& Vector<T>::operator-=(const Vector<T>& v)
{
	if (size != v.size)
	{
		throw v.size;
	}
	for (int i = 0; i < size; i++)
	{
		mas[i] -= v.mas[i];
	}
	return (*this);
}
template <class T>
T Vector<T>::operator *(const Vector<T>& v)
{
	if (size != v.size)
	{
		throw v.size;
	}
	T res = mas[0] * v.mas[0];
	for (int i = 1; i < size; i++)
	{
		res += mas[i] * v.mas[i];
	}
	return res;
}
