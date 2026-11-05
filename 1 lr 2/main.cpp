#include <iostream>
#include "1semm/frontend/array.h"
using namespace std;
int main()
{
    char task;
    while (true)
    {
        cout << "Выберите задачу (1-3):" <<endl << "1 -  Одномерный массив" <<endl << "2 - Двумерный массив" << endl << "3 - Текст из файла" << endl << "0 - Выход" <<endl;
        cin >> task;
        cin.ignore(10000, '\n');
        switch (task)
        {
            case '1':
                massive();
                break;
            case '2':
                break;
            case '3':
                break;
            case '0':
                return 0;
            default:
                cout << "Неправильный выбор!" << endl;
                break;
        }
    }
}
