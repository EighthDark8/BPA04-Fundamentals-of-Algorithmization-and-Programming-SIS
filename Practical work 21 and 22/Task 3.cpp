/*Задание 3*/
/*Создайте программу, выводящую на экран первые 55 элементов последовательности 1 3 5 7 9 11 13 15 17.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    while(a<=55)
    {
        b=2*a+1;
        a+=1;
        cout << "\n" << b;
    }

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}