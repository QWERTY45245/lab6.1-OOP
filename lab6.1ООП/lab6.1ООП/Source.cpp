#include<Windows.h>
#include "Array.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

typedef Array::value_type* TArray;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;
    cout << "n= ";
    cin >> n;

    Array c(n);
    srand(static_cast<unsigned>(time(NULL)));

    for (int i = 0; i < n; i++) {
        c.push_back(rand() % 101 - 50); // випадкові числа від -50 до +50
    }

    cout << "Початковий масив: " << c;

    c.addFirstOddAbsolute();
    cout << "Масив після додавання абсолютної величини першого непарного числа: " << c;

    c.appendSumAndAverage();
    cout
        << "Масив після дописування суми і середнього арифметичного: " << c;

    cin.get();
    cin.get();
    return 0;
}
    
    