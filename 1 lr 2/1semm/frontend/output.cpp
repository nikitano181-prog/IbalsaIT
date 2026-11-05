#include "../backend/files.h"
#include "output.h"

void nopos()
{
    cout << "отсутствуют положительные элементы" <<endl;
}

void sumout(float summa)
{
    cout <<"сумма до последнего положительного элемента равна " <<summa <<endl;
}

void arrout(const float a[], int n)
{
    cout << "Отсортированный массив:" <<endl;
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] <<' ';
    }
    cout <<endl;
}

void norange()
{
    cout <<"Нет чисел входящих в интервал";
}

void maxout(float max, int ind)
{
    cout << "Максимальный элемент массива =" <<' ' << max <<endl;
    cout << "Индекс максимального элемента =" <<' ' << ind <<endl;
}

void maxmany(float a[], int n)
{
    cout << "максимальных эдементов несколько, их колличество = " <<jjj(a,n, searchmax(a, n)) <<endl;
    cout <<"Их индексы: ";
    for(int i = 0; i<n; ++i)
    {
        if(a[i] == searchmax(a,n)){
            cout << i <<", ";
        }
    }
    cout <<endl;
}

void sizein()
{
    cout <<"Введите размер массива " <<endl;
}
    

void badsize()
{
    cout <<"введите верный размер массива!!!!!!" <<endl;
}

void elemsin()
{
    cout <<"Введите элементы массива " <<endl;
}

void lowmod()
{
    cout <<"Введите нижнюю границу интервала:" <<endl;
}

void highmod()
{
    cout <<"Введите верхнюю границу интервала:" <<endl;
}
void errormod(){
     cout <<"нижняя граница должна быть меньше верхней, повторите ввод" <<endl;
}
