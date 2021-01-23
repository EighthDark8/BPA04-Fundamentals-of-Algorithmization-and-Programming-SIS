/*Задание 6*/
/*Организовать беспрерывный ввод чисел с клавиатуры, пока пользователь не введёт 0. После ввода нуля, показать на экран количество чисел, которые были введены, их общую сумму и среднее арифметическое. Подсказка: необходимо объявить переменную-счетчик, которая будет считать количество введенных чисел, и переменную, которая будет накапливать общую сумму чисел.*/
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int i =0;
    int sum = 0;
    int n =1;
    cout << "Insert the number:\n";
    while(n!=0)
    {
        cout <<"Number " <<i+1 << ": ";
        cin>>n;
        if(n!=0)
        {
            i++;
            sum += n;
        }
    }
    cout << "Number of entered numbers :"<< i+1 <<endl;
    cout << "Total amount:" << sum << endl;
    cout << "Average :"<< sum / (i+1) <<endl;

    cout << "\n------------------------"<<endl;
    cout << "\nCreated by Ivan Goldobin"<<endl;
    cout << "\n------------------------"<<endl;
}