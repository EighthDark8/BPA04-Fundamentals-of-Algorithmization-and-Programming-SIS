#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	double y;
	cout << "Enter <Y>: " <<endl; 
	cin >> y;

	double z;
	cout << "\nEnter <Z>: " <<endl; 
	cin >> z;

	double decision;
	decision = pow(cos(sin(1/z)), 2);

	if (decision==y)
	{
		cout << "\nTrue" <<endl;
	}
	else
	{
		cout << "\nFalse" <<endl;
	}

	/*cout << "\nExpression equals: " << decision << endl;*/ //Элемент проверки работы строки 16

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}