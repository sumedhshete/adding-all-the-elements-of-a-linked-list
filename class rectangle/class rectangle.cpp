// class rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//rectangle class with constructors


#include <iostream>
using namespace std;

class rectangle
{
	int length;
	int breadth;
public:
	rectangle()
	{
		length = 1;
		breadth = 1;

	}

	rectangle(int l, int b)
	{
		setlength(l);
		setbreadth(b);
	}

	int area()
	{
		return length * breadth;
	}

	int perimeter()
	{
		return 2 * (length + breadth);
	}

	int getlength()
	{
		return length;
	}

	int getbreadth()
	{
		return breadth;
	}

	void setlength(int l)
	{
		length = l;
	}

	void setbreadth(int b)
	{
		breadth = b;
	}

};

int main()
{
	cout << "Enter the length and breadth of the rectangle: ";
	int a, b;
	cin >> a >> b;
	

	rectangle r(a, b);

	

	cout << r.area()<<endl;
	cout << r.perimeter();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
