#include "files.h"
float zero(float a[], int &n)
{
    float r {};
    for(int i = n-1; i > 0; --i)
    {
        if(a[i] > 0)
        {
            r = a[i];
            return r;
        }
    }
    return 0;
}
