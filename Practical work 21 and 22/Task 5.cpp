/*Задание 5*/
/*Создайте программу, выводящую на экран первые 20 элементов последовательности 2 4 8 16 32 64 128.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1;
    double b = 1;
    while(a<=20)
    {
        b=pow(2, a);
        a+=1;
        cout << "\n" << b;
    }
    
    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}