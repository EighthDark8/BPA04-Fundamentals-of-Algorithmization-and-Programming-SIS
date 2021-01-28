/*Задание 1*/
/*Написать программу, которая вычисляет выражение: y=cos(sin(1/z)^2*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	double z;
	cout << "\nEnter <Z>: " <<endl; 
	cin >> z;

	double decision;
	decision = pow(cos(sin(1/z)), 2);

	cout << "\nExpression equals: " << decision << endl;

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}