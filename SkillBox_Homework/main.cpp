/*
  main.cpp
 
  Моя учёба в SkillBox на курсе "Разработчик игр на Unreal Engine 4" (C++)
 
  SkillBox_Homework 15.4

  Created by Tony Stark817(Nikolay Gridin) on 09.10.2022.
*/

#include <iostream>

using namespace std;

void PrintNumbers(int N, bool isEven)
{
    for( int i = isEven; i <= N; i += 2 )
        
        cout << i << ' ' ;
}
int main()
{
    const int N = 100;
   
    cout << "Чётные числа :" << "\n";
    PrintNumbers(100, false);
    cout << "\n";
    cout << "Нечётные числа :" << "\n";
    PrintNumbers( 100, true);
}
 



 

