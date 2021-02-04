/*Задание 7*/
/*Решено с помощью цикла с постусловием*/
/*Необходимо суммировать все нечётные целые числа в диапазоне, который введёт пользователь с клавиатуры.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int FirstNumber = 0;
	int SecondNumber = 0;
	int Sum = 0;

	cout << "Enter The First Number: ";
	cin >> FirstNumber;
	cout << "Enter The Second Number: ";
	cin >> SecondNumber;

	do
		{
		if(FirstNumber % 2 != 0)
			{
				Sum += FirstNumber;
			}
	FirstNumber ++;
	}while(FirstNumber <= SecondNumber);

	cout << Sum << endl;

	return 0;
}
