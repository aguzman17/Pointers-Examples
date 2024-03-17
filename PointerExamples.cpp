#include <iostream>
using namespace std;

void f(int&);
int main()
{
	int n = 20;
	int n2[5];

	//declaring the pointer
	int* p;

	//assigning the address of n to the pointer

	p = &n;

	//shows the address of the variable
	cout << "Address of &n: " << &n << "\n";

	//shows the address of the variable
	cout << "Address of p: " << p << "\n";

	//shows the value of the variable
	cout << "Value of n: " << n << "\n";

	//shows the pointer with the value of the variable inside
	cout << "Value of *p: " << *p << "\n";

	//change the variable of the pointer
	*p = 10;

	//shows new value of pointer
	cout << "New value of *p: " << *p << "\n\n\n";

	//pointers with arrays
	int a[3] = { 10,20,30 };

	p = a;

	for (int i = 0; i < 3; i++)
	{
		cout << "Value of *p: " << *p << "\n";
		cout << "Address of p: " << p << "\n";

		//increase pointer *p by 1
		p++;
	}

	cout << "\n\n";

	f(*p);

	cout << "New address of pointer after change: " << &p << "\n\n";

	//using constants in pointers

	int v = 5;
	int m;
	const int* pp = &v; 

	// it allows you to change the value of the variable
	//but it doesnt let you change the pointer
	//the address is going to change
	cout << "Value of *pp: " << *pp << "\n";
	cout << "Address of *pp: " << &pp << "\n\n";

	v = 6;

	cout << "Changed value of *pp: " << *pp  << "\n";
	cout << "Changed address of *pp: " << &pp << "\n\n";

	//Address of the variable can be change, 
	//but not change the pointer
	//address does not change
	int value = 9;
	int* const ptr2 = &value;

	cout << "Value of ptr2: " << *ptr2 << "\n";
	cout << "Address of ptr2: " << ptr2 << "\n\n";

	value = 1;

	cout << "Changed value of ptr2: " << *ptr2 << "\n";
	//this address is going to be the same as the first one
	cout << "Address of ptr2: " << ptr2 << "\n\n";

	//Doesn't let you change anything

	const int vv = 8;
	const int* const ptr = &vv;

	cout << "Value of pp: " << *ptr << "\n";
	cout << "Address value of pp: " << ptr << "\n\n\n";

	return 0;
}
//using pointers in functions
void f(int &p)
{
	p = 100;

	cout << "New value using function: " << p << "\n";
}
