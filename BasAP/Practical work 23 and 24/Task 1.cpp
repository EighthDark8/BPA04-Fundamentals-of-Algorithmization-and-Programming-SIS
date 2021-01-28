/*Задание 1*/
/*Решено с помощью цикла с постусловием*/
/*Написать программу, которая считывает введённое пользователем с клавиатуры целое число (использовать переменную целого типа) и выдает на экран дисплея сумму цифр этого числа.*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a;
    int sum=0;
    cout << "enter the number: ";
    cin >> a;
    do
    {
        sum += a % 10;
        a /= 10;
    }
    while (a!=0);
    cout << "sum = " << sum << endl;

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}