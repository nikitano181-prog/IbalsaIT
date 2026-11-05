#include "files.h"
int searchind(float a[], int &n, float maxi)
{
    int index = 0;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] == maxi)
        {
            index = i;
        }
     }
     return index;
}