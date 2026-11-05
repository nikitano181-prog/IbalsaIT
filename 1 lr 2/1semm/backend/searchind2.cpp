#include "files.h"
int searchind2(float a[], int &n, float maxi)
{
    int index = 0;
    for(int i = n-1; i > 0; --i)
    {
        if(a[i] == maxi)
        {
            index = i;
            break;
        }
     }
     return index;
}