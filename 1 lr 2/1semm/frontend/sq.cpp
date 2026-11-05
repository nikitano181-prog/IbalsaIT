#include "array.h"
void sq(float *a, int &n, int sem)
{
    system("clear");
    input(a, n, sem);
    if(zero(a, n) == 0){
        nopos();
    }
    else
    {
        int e = searchind2(a, n, zero(a, n));
        float t = sum(a, e);
        sumout(t);
    }
    delete []a;
}
