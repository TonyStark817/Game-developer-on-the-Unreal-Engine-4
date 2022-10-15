/*
  main.cpp
 
  Моя учёба в SkillBox на курсе "Разработчик игр на Unreal Engine 4" (C++)
 
  SkillBox_Homework 17.5

  Created by Tony Stark817(Nikolay Gridin) on 09.10.2022.
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class Vector
{

private:

    double x = 9;
    double y = 9;
    double z = 9;
  

public:

    Vector() : x(10), y(10), z(10)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}


    void Show()
    {
        cout << '\n' << x << ' ' << y << ' ' << z;
    }

    double Lenght()
    {
        return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    }
};

int main()
{
    Vector v;
    v.Show();
    double MyLenght = v.Lenght();
    cout << '\n' << "Длина (модуль) вектора = " << v.Lenght() << endl;
}
