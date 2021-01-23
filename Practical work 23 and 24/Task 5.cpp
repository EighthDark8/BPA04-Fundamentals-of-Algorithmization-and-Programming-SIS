/*Задание 5*/
/*Решено с помощью цикла с постусловием*/
/*Создайте программу, выводящую на экран первые 20 элементов последовательности 2 4 8 16 32 64 128.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1;
    double b = 1;
    do
    {
        b=pow(2, a);
        a+=1;
        cout << "\n" << b;
    }
    while(a<=20);
    
    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}