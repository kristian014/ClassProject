#include <iostream>
#include <assert.h>
using namespace std;
#include "Fraction.h"


// default constructor

Fraction::Fraction()
{
	Num(0); Den(1);
}

// (num, den) constructor

Fraction::Fraction(int num, int den)
{
	Num(num); Den(den);
}

// this will return the numerator
// this is the getter and you dont need to make it constant 
int Fraction::Num() const
{
	return m_num;
}
// this are your getters
//this will return the denorminator
// this is the getter and you dont need to make it constant 
int Fraction::Den()const
{
	return m_den;
}


//this are your setters
// And you want to be able to chanege the values 
void Fraction::Num(int num)
{
	m_num = num;
}
//this are your setters
// And you want to be able to chanege the values 
void Fraction::Den(int den)
{
	assert(den);
	m_den = den;
}
// This is the implementation of your header file .h.. 
// when the .Ad method is called the Fraction.cpp file executes the method
Fraction Fraction::Add(const Fraction &rhs)const
{
	return Fraction(m_num * rhs.Den() + m_den * rhs.Num(), m_den * rhs.Den());
}


void  Fraction::Write(ostream& sout) const
{
	sout << m_num << "/" << m_den;
}


//void  Fraction::Read(istream& sin) const
//{
	//sin >> m_num << "/" << m_den;
//}

Fraction Fraction::Subtract(const Fraction &rhs)const
{
	return Fraction(m_num * rhs.Den() - m_den * rhs.Num(), m_den * rhs.Den());
}

// this method is adding two fractions together using the member method
//
Fraction Fraction::operator+(const Fraction& rhs)const
{
	return Fraction(m_num * rhs.Den() + m_den * rhs.Num(), m_den * rhs.Den());
}

// this method is to subtract two fractions together using the member method
//
Fraction Fraction::operator-(const Fraction& rhs)const
{
	return Fraction(m_num * rhs.Den() - m_den * rhs.Num(), m_den * rhs.Den());
}

// this method is to multiply two fractions together using the member method
//
Fraction Fraction::operator*(const Fraction& rhs)const
{
	return Fraction(m_num * rhs.Den() * m_den * rhs.Num(), m_den * rhs.Den());
}


Fraction Fraction::Mutiply(int multiply) const
{
	return Fraction(m_num * m_num, m_den);
}

// this method is for the member operator* to multiply just one number to 
// a fraction
Fraction Fraction::operator* (int multiply) const
{
	return Fraction(m_num * multiply, m_den);
}
// this method is for the member operator+ to add just one number to 
// a fraction
Fraction Fraction::operator+ (int add) const
{
	return Fraction(m_num + add, m_den);
}

// this method is for the member operator-
Fraction Fraction::operator- (int sub)const
{
	return Fraction(m_num - sub, m_den);
}


// This is for your Auxiliary operator
 Fraction operator* (int multiply, const Fraction& F)
{
	 return F * multiply;
}