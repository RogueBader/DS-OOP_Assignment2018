#include <iostream>
using namespace std;
#include "list.h"
#include "Operation.h"

int main()
{
	cout << "Assignment 01" << endl << "DS & OOP" << endl << "Saad Bader" << "DE-39 / MTS-B"  << endl;
	
	int Re, Im;
	complex_list obj1;
	obj1.insert_at_start(4, 3);
	obj1.insert_at_start(3, -3);
	obj1.insert_at_start(4, 5);
	cout << "Operations performed on initial list and each member is denoted by a number (1,2, and 3 etc)" << endl;
	obj1.traverse();

	cout << "Adding (1) and (2) and storing at start:" << endl;
	cal obj2;
	Re = obj2.addition_Re(4, 3);
	Im = obj2.addition_Im(5, -3);
	obj1.insert_at_start(Re, Im);
	obj1.traverse();

	cout << "Subtraction of (1) and (3) and storing at last :" << endl;
	Re = obj2.subtraction_Re(4, 4);
	Im = obj2.subtraction_Im(5, 3);
	obj1.insert_at_end(Re, Im);
	obj1.traverse();

	cout << "Multiplication of (2) and (3) and storing at last:" << endl;
	Re = obj2.multiplication_Re(3, 4);
	Im = obj2.multiplication_Im(-3, 3);
	obj1.insert_at_end(Re, Im);
	obj1.traverse();

	cout << "Division of (1) and (3) and storing at last:" << endl;
	Re = obj2.division_Re(4, 4);
	Im = obj2.division_Im(5, 3);
	obj1.insert_at_end(Re, Im);
	obj1.traverse();

	cout << "Deleting at position 4(recent list):" << endl;
	obj1.del_sp(4);
	obj1.traverse();

	cout << "Deleting at end(recent list):" << endl;
	obj1.del_end();
	obj1.traverse();

	system("pause");
	return 0;
}