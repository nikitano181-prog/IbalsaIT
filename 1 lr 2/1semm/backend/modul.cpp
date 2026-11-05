#include "files.h"
#include <cmath>
void modul(float a[], int &n, float l, float h)
{
    int r = 0;
    for(int i = 0; i < n; ++i)
    {
        if(fabs(a[i]) >= l && fabs(a[i]) <= h)
        {
            a[i] = 0;
            ++r;
        }
    }
    if(r == 0)
    {
            norange();
    }
    movenumbers(a, n);
}