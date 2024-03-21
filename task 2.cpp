#include <iostream>
#include <stdlib.h>
using namespace std;

double getValue();
/**
 * @brief считывает значение из потокового ввода
 * @return введенное значение
*/
double massConverter(const double m);
/**
 * @brief переводит массу из грамм в унции
 * @param m - масса в граммах
 * @return масса в унциях
*/
int main()
{
    double m = getValue();
    cout << "Масса в унциях равна: " << massConverter(m);
    return 0;
}

double getValue()
{
    cout << "Введите массу в граммах: " << endl;
    double value;
    cin >> value;
    if (cin.fail())
    {
        cout << "Invalid value" << endl;
        abort();
    }
    return value;
}

double massConverter(const double m)
{
    return m * 28.3;
}