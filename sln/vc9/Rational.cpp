#pragma once
#include <iostream>
#include<cmath>
#include "Rational.h"
void Rational::nod()
{
	int m_ = fabs(m), n_ = fabs(n);
	while (m_ != 0 && n_ != 0)
	{
		if (m_ > n_)
		{
			m_ -= n_;
		}
		else
		{
			n_ -= m_;
		}

	}
	m /= (m_ + n_);
	n /= (m_ + n_);
}
Rational::Rational()
{
	m = 0;
	n = 1;
}
Rational::Rational(int m_, int n_)
{
	m = m_;
	n = n_;
}
bool Rational::operator!=(Rational& c)
{
	nod();
	c.nod();
	if (c.m != m || n != c.n)
	{
		return true;
	}
	return false;
}
bool Rational:: operator>(Rational& c)
{
	nod();
	c.nod();
	if (n == c.n)
	{
		if (m > c.m)
			return true;
		else
			return false;
	}
	m *= c.n;
	c.m *= n;
	int tmp = n;
	n *= c.n;
	c.n *= tmp;
	if (m > c.m)
		return true;
	else
		return false;
}
bool Rational:: operator<(Rational& c)
{
	nod();
	c.nod();
	if (n == c.n)
	{
		if (m < c.m)
			return true;
		else
			return false;
	}
	m *= c.n;
	c.m *= n;
	int tmp = n;
	n *= c.n;
	c.n *= tmp;
	if (m < c.m)
		return true;
	else
		return false;
}
Rational random(const Rational& min, const Rational& max)
{
	Rational r;
	r.m = min.m + (max.m - min.m) * rand() / RAND_MAX;
	r.n = min.n + (max.n - min.n) * rand() / RAND_MAX;
	return r;
}
Rational& Rational:: operator =(const int x)
{
	m = x;
	n = 1;
	return (*this);
}
Rational Rational::operator + (const Rational& c)
{
	Rational temp;
	if (n != c.n)
	{
		temp.m = (m * c.n) + (n * c.m);
		temp.n = c.n * n;
		temp.nod();
		return temp;
	}
	temp.m = m + c.m;
	temp.n = n;
	temp.nod();
	return temp;
}
Rational& Rational::operator+=(const Rational& c)
{
	if (n != c.n)
	{
		m = m * c.n + n * c.m;
		n = c.n * n;
		nod();
		return *this;
	}
	m += c.m;
	nod();
	return *this;
}
Rational& Rational:: operator += (const int x)
{
	m = m + x * n;
	nod();
	return(*this);
}
Rational Rational::operator +(const int x)
{
	Rational temp;
	temp.m = (x * n) + m;
	temp.n = n;
	temp.nod();
	return temp;
}
Rational operator +(const int x, const Rational& c)
{
	Rational temp;
	temp.n = c.n;
	temp.m = (c.n * x) + c.m;
	temp.nod();
	return temp;
}
Rational Rational::operator -(const Rational& c)
{
	Rational temp;
	if (c.n != n)
	{
		temp.n = n * c.n;
		temp.m = m * c.n - c.m * n;
		temp.nod();
		return temp;
	}
	temp.n = n;
	temp.m = m - c.m;
	temp.nod();
	return temp;
}
Rational& Rational::operator-=(const Rational& c)
{
	if (n != c.n)
	{
		m = (m * c.n) - (c.m * n);
		n = n * c.n;
		nod();
		return *this;
	}
	m -= c.m;
	nod();
	return *this;
}
Rational& Rational:: operator -= (const int x)
{
	m = m - x * n;
	nod();
	return (*this);
}
Rational Rational::operator -(const int x)
{
	Rational temp;
	temp.n = n;
	temp.m = m - x * n;
	temp.nod();
	return temp;
}
Rational operator - (const int x, const Rational& c)
{
	Rational temp;
	temp.n = c.n;
	temp.m = x * c.n - c.m;
	temp.nod();
	return temp;
}
Rational Rational:: operator *(const Rational& c)
{
	Rational temp;
	temp.m = m * c.m;
	temp.n = n * c.n;
	temp.nod();
	return temp;
}
Rational& Rational:: operator *=(const Rational& c)
{
	m = m * c.m;
	n = n * c.n;
	nod();
	return *this;
}
Rational& Rational:: operator *= (const int x)
{
	m = m * x;
	nod();
	return *this;
}
Rational Rational:: operator *(const int x)
{
	Rational temp;
	temp.n = n;
	temp.m = m * x;
	temp.nod();
	return temp;
}
Rational operator *(const int x, const Rational& c)
{
	Rational temp;
	temp.n = c.n;
	temp.m = x * c.m;
	temp.nod();
	return temp;
}
Rational Rational::operator /(const Rational& c)
{
	Rational temp;
	temp.m = m * c.n;
	temp.n = n * c.m;
	temp.nod();
	return temp;
}
Rational& Rational:: operator/=(const Rational& c)
{
	m = m * c.n;
	n = n * c.m;
	nod();
	return *this;
}
Rational& Rational:: operator /= (const int x)
{
	n = n * x;
	nod();
	return *this;
}
Rational Rational:: operator /(const int x)
{
	Rational temp;
	temp.m = m;
	temp.n = n * x;
	temp.nod();
	return temp;
}
Rational operator /(const int x, const Rational& c)
{
	Rational temp;
	temp.m = x * c.n;
	temp.n = c.m;
	temp.nod();
	return temp;
}
bool Rational:: operator==(const Rational& c)
{
	if (m * c.n == c.m * n)
	{
		return true;
	}
	return false;
}
bool Rational:: operator==(const int x)
{
	if (m == x * n)
	{
		return true;
	}
	return false;
}
bool operator ==(const int x, const Rational& c)
{
	if (c.m == x * c.n)
	{
		return true;
	}
	return false;
}
bool operator ==(const Rational& c, const int x)
{
	if (c.m == x * c.n)
	{
		return true;
	}
	return false;
}
std::ostream& operator<<(std::ostream& os, Rational& c)
{
	c.nod();
	if (c.m == 0)
	{
		os << 0;
		return os;
	}
	if (c.n == 1)
	{
		os << c.m;
		return os;
	}
	os << c.m << "/" << c.n;
	return os;
}
std::istream& operator>>(std::istream& is, Rational& c)
{
	is >> c.m;
	if (c.m == 0)
	{
		c.n = 1;
		return is;
	}
	std::cout << "/" << std::endl;
	is >> c.n;
	return is;
}