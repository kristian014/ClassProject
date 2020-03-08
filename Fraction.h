#pragma once 

#include <iostream>
using namespace std;

class Fraction 

{

public:

	// default constructor
	Fraction();



	// specific constructor
	Fraction(int num, int den);

	// this method is for just addint one number to a fraction using the member operator
	//
	Fraction operator+ (int add) const;
	Fraction operator* (int multiply) const;
	Fraction operator- (int sub)const;

	
	
	
		
		// arthematic facilitators
	Fraction Add(const Fraction &rhs)const;
  Fraction Subtract(const Fraction &rhs)const;
	Fraction Mutiply(int multiply) const;
	Fraction Divide(int scale) const;
	// this method is to add two 
	// numbers together using the member operator
	Fraction operator+(const Fraction& rhs)const;
	Fraction operator-(const Fraction& rhs)const;
	Fraction operator*(const Fraction& rhs)const;

	// getter/ inspectors 
		int Num() const;
	int Den() const;

	// setters/ mutators
	void Num(int num);
	void Den(int den);

	// stream facilitators 
	void Write(ostream& sout) const;
	void Read(istream& sin);


private:
	int m_num;
	int m_den;


};


// this is an auxilary function that leaves outside of the class. 
Fraction operator* (int multiply, const Fraction& F);
