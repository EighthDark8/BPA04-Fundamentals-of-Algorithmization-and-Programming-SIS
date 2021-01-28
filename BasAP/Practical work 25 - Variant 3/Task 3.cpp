/*Задание 3*/
/*Создайте программу, которая выводит на экран сумму первой и последней цифр любого целого положительного числа.*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	cout << "Enter <number>: " <<endl;
	long int a, b, number, sum;
	cin >> number;
	if ((number > 0) || (number == 0))
	{
		a = number % 10;
		number = number / 10;
		while (number > 0)
		{
			b = number % 10;
			number = number / 10;
		}
		sum = a+b;
		cout << "Sum: " << sum <<endl;
	}
	else 
	{
		cout << "Number negative" <<endl;
	}

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldoыin"<<endl;
    cout << "\n------------------------"<<endl;
}