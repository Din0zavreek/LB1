#include "hypotenuse.h"
#include <iostream>
#include <string>

using namespace std;

bool hypotenuse::init(double f, double s)
{
    if (f > 0 && s > 0)
    {
        this->first = f;
        this->second = s;
        return true;
    }
    else
    {
        cout << "Помилка, катети мають бути додатними" << endl;
        cout << endl;
        return false;
    }
}

void hypotenuse::Read()
{
    double f, s;
    do
    {
        cout << "Введіть довжину катета a " << endl;
        cin >> f;
        cout << endl;
        cout << "Введіть довжину катета b " << endl;
        cin >> s;
        cout << endl;
    } while (!init(f, s));
}

double hypotenuse::hypotenusa()
{
    double a = this->first;
    double b = this->second;
    double result = sqrt(a * a + b * b);
    return result;
}

void hypotenuse::Display()
{
    cout << "Катет a = " << to_string(this->first) << endl;
    cout << "Катет b = " << to_string(this->second) << endl;
    cout << "Гіпотенуза = " << to_string(hypotenusa()) << endl;
}