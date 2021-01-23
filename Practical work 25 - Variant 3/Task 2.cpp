/*Задание 2*/
/*Создайте программу, выводящую на экран сумму четных элементов от 0 до 20*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int b = 20;
	int a = 1;
	int sum = 0, mult = 1;
	for (int i = a; i <= b; i++) 
	{
   	if (i % 2 == 0) 
    	{
    	    sum += i;
    	}
    }
    
    cout << "\nSumm: " << sum << endl;

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}