/*Задание 4*/
/*Решено с помощью цикла с предусловием*/
/*Создайте программу, выводящую на экран все неотрицательные элементы последовательности 90 85 80 75 70 65 60.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 90;
    int i;
    do
    {
        cout << n << endl;
        n-=5;
    }
    while (n>=0);
    
    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}