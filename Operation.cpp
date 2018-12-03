#include "Operation.h"
#include <iostream>
using namespace std;

cal::cal()
{
	solution_Re = 0;
	solution_Im = 0;
}

int cal::addition_Re(int val_Re, int val2_Re)
{
	return solution_Re = val_Re + val2_Re;
}
int cal::addition_Im(int val_Im, int val2_Im)
{
	return solution_Re = val_Im + val2_Im;
}
int cal::subtraction_Re(int val_Re, int val2_Re)
{
	return solution_Re = val_Re - val2_Re;
}
int cal::subtraction_Im(int val_Im, int val2_Im)
{
	return solution_Re = val_Im - val2_Im;
}
int cal::multiplication_Re(int val_Re, int val2_Re)
{
	return solution_Re = val_Re * val2_Re;
}
int cal::multiplication_Im(int val_Im, int val2_Im)
{
	return solution_Re = val_Im * val2_Im;
}
int cal::division_Re(int val_Re, int val2_Re)
{
	int o = 0;
	try
	{
		if (val2_Re == 0)
			throw "Error";
		o = val_Re / val2_Re;
		return o;
	}
	catch (...)
	{
		cout << "Math error... Division by 0 on real part" << endl;
	}
}
int cal::division_Im(int val_Im, int val2_Im)
{
	int o = 0;
	try
	{
		if (val2_Im == 0)
			throw "Error";
		o = val_Im / val2_Im;
		return o;
	}
	catch (...)
	{
		cout << "Math error... Division by 0 on imaginary part" << endl;
	}
}