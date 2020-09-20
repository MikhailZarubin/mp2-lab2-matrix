#pragma once
#include<iostream>
class Rational
{
private:
	int m, n;
	void nod();
public:
	Rational();
	Rational(int m_, int n_);
	friend Rational random(const Rational& min, const Rational& max);
	Rational& operator =(const int x);
	Rational operator +(const Rational& c);
	Rational& operator+=(const Rational& c);
	Rational& operator+=(const int x);
	Rational operator +(const int x);
	friend Rational operator + (const int x, const Rational& c);
	Rational operator -(const Rational& c);
	Rational& operator -=(const Rational& c);
	Rational& operator -=(const int x);
	Rational operator -(const int x);
	friend Rational operator -(const int x, const Rational& c);
	Rational operator *(const Rational& c);
	Rational& operator *=(const Rational& c);
	Rational& operator *=(const int x);
	Rational operator *(const int x);
	friend Rational operator *(const int x, const Rational& c);
	Rational operator /(const Rational& c);
	Rational& operator /=(const Rational&);
	Rational& operator /=(const int x);
	Rational operator /(const int x);
	friend Rational operator /(const int x, const Rational& c);
	bool operator == (const Rational& c);
	bool operator ==(const int x);
	bool operator !=(Rational& c);
	friend bool operator == (const int x, const Rational& c);
	friend bool operator ==(const Rational& c, const int x);
	friend std::ostream& operator << (std::ostream& os, Rational& c);
	friend std::istream& operator >>(std::istream& is, Rational& c);
	bool operator > (Rational& c);
	bool operator < (Rational& c);
};
