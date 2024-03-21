#include <iostream>
#include <stdlib.h>
using namespace std;
/**
 * @brief считывает значение из потокового ввода
 * @return введенное значение
*/
double getValue();

/**
 * @brief переводит массу из грамм в унции
 * @param m - масса в граммах
 * @return масса в унциях
*/
double massConverter(const double m);

/**
 * @brief точка входа в программу
 * @return возвращает 0, если программа выполнена успешно
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
    const double coef = 28.3;
    return m * coef;
}
