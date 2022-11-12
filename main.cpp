// write your code here
//Isaiah Howard		J00978127	11/4/22
//	Prgoramming Assigment Chapter 4 Exercise page 259
//	11/9/22
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int b;
	int c;
	

	cout << "Enter 'a' of equation: ";
	cin >> a;
	cout << endl;

	cout << "Enter 'b' of equation: ";
	cin >> b;
	cout << endl;

	cout << "Enter 'c' of equation: ";
	cin >> c;
	cout << endl;
	
	double root1 = ((( - b + pow(((b ^ 2) - (4 * a * c)), 0.5)) / (2 * a)));
	double root2 = ((( - b - pow(((b ^ 2) - (4 * a * c)), 0.5)) / (2 * a)));

	if ((((b ^ 2) - (4 * a * c))^0.5) == 0)
	{
		cout << "Equation has a single root" << endl;
	}
	else if ((pow(((b ^ 2) - (4 * a * c)), 0.5)) > 0)
	{
		cout << "Equaiton has two real roots" << endl;
	}
	else
	{
		cout << "Equation has two complex roots so they can not be displayed" << endl;
	}

	if ((pow(((b ^ 2) - (4 * a * c)), 0.5)) >= 0)
	{
		cout << "The roots are (" << root1 << ", 0), " << "(" << root2 << ", 0)" << endl;
	}
	else if (root1 == root2)
	{
		cout << "The root is (" << root1 << ", 0)" << endl;
	}

	return 0;
}
