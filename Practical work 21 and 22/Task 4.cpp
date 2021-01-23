/*Задание 4*/
/*Создайте программу, выводящую на экран все неотрицательные элементы последовательности 90 85 80 75 70 65 60.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 90;
    int i;
    while (n>=0)
    {
        cout << n << endl;
        n-=5;
    }
    cout <<"\nDerived a sequence of non-negative numbers from steps in 5"<< endl;
}