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
	

	cin >> a >> b >> c;
	cout << endl;
	
	double root1 = ((( - b + pow(((b ^ 2) - (4 * a * c)), 0.5)) / (2 * a)));
	double root2 = ((( - b - pow(((b ^ 2) - (4 * a * c)), 0.5)) / (2 * a)));

	if ((pow(((b ^ 2) - (4 * a * c)), 0.5)) == 0)
	{
		cout << "The single root is " << root1 << endl;
	}
	else if ((pow(((b ^ 2) - (4 * a * c)), 0.5)) > 0)
	{
		cout << "Two real roots" << endl;
		cout << "- First root " << root2 << endl;
		cout << "- Second root " << root1 << endl;
	}
	else
	{
		cout << "Complex roots" << endl;
	}

	return 0;
}
