/*
  main.cpp
 
  Моя учёба в SkillBox на курсе "Разработчик игр на Unreal Engine 4" (C++)
 
  SkillBox_Homework 16.5

  Created by Tony Stark817(Nikolay Gridin) on 09.10.2022.
*/

#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;



int main()
{
    
    const int N = 5;
    int array[N][N];
    int sum = 0; /*переменная для хранения суммы чисел*/
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;
        }
    }
 
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
         cout << array[i][j] << " ";
        
        }
        cout << endl;
    }
    
    struct tm newtime;
    time_t t_now = time(0);
     int Day = localtime(&t_now)->tm_mday % N;
    cout << "День = " << Day << "\n";

    for (int j = 0; j < N; j++)
    {
           sum = sum + array[Day][j]; /*проходимся по строке и складываем числа в ней*/
    }
    
    cout << "Cумму элементов в строке массива = " << sum << endl;

    return 0;
}
