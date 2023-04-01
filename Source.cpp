// Написать приложение, которое будет считать сколько времени понадобилось программе, что бы отработать. 
//Сделать все через git с commit, создав свою ветку и загрузив после в мастер
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Table
{
public:
    double number;
    vector<int> values{ 1,2,3,4,5,6,7,8,9,10 };

    void TableMulti()
    {
        cout << "=== Таблица умножения ===" << endl;

        while (true)
        {
            cout << "Введите число: ";
            cin >> number;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Некорректный ввод, попробуйте снова" << endl;
            }
            else
            {
                cin.ignore(32767, '\n');
                break;
            }
        }

        cout << "Таблица умножения на число " << number << ":" << endl;
        for (int n : values)
        {
            cout << number << " * " << n << " = " << number * n << " " << endl;
        }
    }
};

class Factorial
{
public:
    double number;
    int f = 1;
    void FactorialValue()
    {
        cout << "=== Факториал ===" << endl;

        while (true)
        {
            cout << "Введите целое положительное число: ";
            cin >> number;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Некорректный ввод, попробуйте снова" << endl;
            }
            else if (number == 0)
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Факториал 0! = 1" << endl;
                return;
            }

            else if (cin.fail() || number < 1 || (int)number != number)
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Некорректный ввод, попробуйте снова" << endl;
            }

            else
            {
                cin.ignore(32767, '\n');
                break;
            }
        }

        for (int i = 2; i <= number; ++i)
        {
            f = f * i;
        }

        cout << "Факториал числа " << number << " = " << f << endl;
    }
};

class Sphere
{
public:
    double number;
    double S = 0;
    double V = 0;
    double pi = 3.14;
    double r = 0;
    void SphereSquareVolume()
    {
        cout << "=== Площадь поверхности S и объем шара V радиусом r ===" << endl;

        while (true)
        {
            cout << "Введите радиус сферы: ";
            cin >> r;

            if (cin.fail() || r <= 0 || (double)r != r)
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "Некорректный ввод, попробуйте снова" << endl;
            }

            else
            {
                cin.ignore(32767, '\n');
                break;
            }
        }

        cout << "Площадь поверхности шара S = " << 4 * pi * r * r << " " << "и объем шара V = " << 4 * pi * r * r * r << " " << endl;

    }

};

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    Table t;
    t.TableMulti();
    Factorial f;
    f.FactorialValue();
    Sphere s;
    s.SphereSquareVolume();
    cout << "Время работы программы = " << clock() / 1000.0 << " секунд" << endl;
    system("pause");
    return 0;
}