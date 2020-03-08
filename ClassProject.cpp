#pragma once
#include <iostream>
using namespace std;
#include "Fraction.h"


int main(int args, char** argv)
{
	//Fraction f1(1, 2), f2(3, 4);
	//Fraction result;
	


	// for the multiply
	Fraction f1(3, 4), f2(1, 2);
	
	Fraction f3 = 3 * f1;
	//Fraction result;
	//result = f1.Mutiply(3);
	//Fraction f3 = f1 * 3;


	// this calls the add method. 
	//result = f1.Add(f2);


	// this calls the subtract method
	//result = f2.Subtract(f1);
	// why can't you multiply by f1.. 

	// this calls the multiplication methods
	//result = f1.Mutiply(3);
	//Fraction a, b;
	//a.Read(cin);
	//b.Read(cin);
	//Fraction f3;
	//f3.Read(cin);
	//cout << "Read = ";
	//cout << "1/2 + 3/4 =";
	//result.Write(cout);

	//cout << endl;

	//cout << "1/2 - 3/4 = ";
	//result.Write(cout);


	//cout << "3/4 * 3 = ";
	//f3.Write(cout);
	
	// this is for the add output
	//cout << "1/2 + 3/4 = ";
	//result.Write(cout);

	// this is for the subtract out 
		//cout << "3/4 - 1/2 = ";
		//result.Write(cout);

	// this is for multiplication by int
		//cout << "3/4 * 3 = ";
		//result.Write(cout);

	/*This is for the member operator to add a number to a fraction
	Fraction f1(1, 2), f2(3, 4);
	Fraction result;
	result = f2.operator+(4);
	cout << "3/4 + 4 = ";
		result.Write(cout);
		*/

	/*this is the fraction using the member method to add two numbers together
		Fraction f1(1, 2), f2(3, 4);
		Fraction result;
		result = f1 + f2;
		cout << "1/2  + 3/4 = ";
		result.Write(cout);
		*/

		// this is the fraction method to subtract two numbers together. 
	/*
	
	Fraction f1(1, 2), f2(3, 4);
		Fraction result;
		result = f2 - f1;
		cout << "3/4  - 1/2 = ";
		result.Write(cout);
	
	
	*/
		


		// this is the fraction method to multiply two numbers together. 
		//Fraction f1(1, 2), f2(3, 4);
		//Fraction result;
		//result = f2 * 3;
		
		cout << "  3 * 3/4 = ";
		f3.Write(cout);
	
	cout << endl;
		system("PAUSE");

}