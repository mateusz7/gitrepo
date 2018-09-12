/*
 * prostokąt.cpp
 */

using namespace std;

int obwod(int a, int b)
{
    return 2 * a + 2 * b;
}

int pole(int a, int b)
{
    return a * b;
}

#include <iostream>

int main(int argc, char **argv)
{
    int a, b;
    a = b = 0;
    
    cout << "Podaj pierwszy blok: ";
    cin >> a;
    
    cout << "Podaj drugi blok: ";
    cin >> b;
    
    cout << a << " " << b;
    
    cout << endl << "Obwód prostokąta: " << obwod(a, b) << endl;
    cout << endl << "Pole prostokąta: " << pole(a, b) << endl;

    return 0;
}

