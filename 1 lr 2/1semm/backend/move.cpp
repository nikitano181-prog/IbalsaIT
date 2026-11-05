#include "files.h"
#include <algorithm>
void movenumbers(float a[], int &n)
{
    int j = 0;
     for(int i = 0; i < n; i++)
     {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    arrout(a, n);
}