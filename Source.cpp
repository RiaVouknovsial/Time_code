// �������� ����������, ������� ����� ������� ������� ������� ������������ ���������, ��� �� ����������. 
//������� ��� ����� git � commit, ������ ���� ����� � �������� ����� � ������
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
        cout << "=== ������� ��������� ===" << endl;

        while (true)
        {
            cout << "������� �����: ";
            cin >> number;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "������������ ����, ���������� �����" << endl;
            }
            else
            {
                cin.ignore(32767, '\n');
                break;
            }
        }

        cout << "������� ��������� �� ����� " << number << ":" << endl;
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
        cout << "=== ��������� ===" << endl;

        while (true)
        {
            cout << "������� ����� ������������� �����: ";
            cin >> number;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "������������ ����, ���������� �����" << endl;
            }
            else if (number == 0)
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "��������� 0! = 1" << endl;
                return;
            }

            else if (cin.fail() || number < 1 || (int)number != number)
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "������������ ����, ���������� �����" << endl;
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

        cout << "��������� ����� " << number << " = " << f << endl;
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
        cout << "=== ������� ����������� S � ����� ���� V �������� r ===" << endl;

        while (true)
        {
            cout << "������� ������ �����: ";
            cin >> r;

            if (cin.fail() || r <= 0 || (double)r != r)
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "������������ ����, ���������� �����" << endl;
            }

            else
            {
                cin.ignore(32767, '\n');
                break;
            }
        }

        cout << "������� ����������� ���� S = " << 4 * pi * r * r << " " << "� ����� ���� V = " << 4 * pi * r * r * r << " " << endl;

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
    cout << "����� ������ ��������� = " << clock() / 1000.0 << " ������" << endl;
    system("pause");
    return 0;
}