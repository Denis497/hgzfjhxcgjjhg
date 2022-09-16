#include <stdio.h> /* —тандартный заголовочный файл ввода-вывода */
#include <iostream> /* Ѕиблиотека (стандарт) */
#include <locale.h> /* –усификатор */
#include <windows.h> /* –усификатор */
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "Russian");
    double plus, minus, pow, div; // объ€вление переменных через зап€тую
    double a1; // отдельное объ€вление переменной a1
    double a2; // отдельное объ€вление переменной a2
    cout << "¬ведите первое число: ";
    cin >> a1;
    cout << "¬ведите второе число: ";
    cin >> a2;
    plus = a1 + a2;  // операци€ сложени€
    minus = a1 - a2;  // операци€ вычитани€
    pow = a1 * a2;  // операци€ умножени€
    div = a1 / a2;  // операци€ делени€
    cout << a1 << "+" << a2 << "=" << plus << endl;
    cout << a1 << "-" << a2 << "=" << minus << endl;
    cout << a1 << "*" << a2 << "=" << pow << endl;
    cout << a1 << "/" << a2 << "=" << div << endl;
    system("pause");
    return 0;
}