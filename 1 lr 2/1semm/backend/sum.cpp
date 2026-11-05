#include "files.h"
float sum(float a[], int ind)
{
    float summa = 0;
    for(int i = 0; i <ind; ++i)
    {
        summa += a[i];
    }
    return summa;
}