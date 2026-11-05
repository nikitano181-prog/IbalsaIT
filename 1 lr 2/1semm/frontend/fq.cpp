#include "array.h"
void fq(float *a, int &n, int sem)
{
    system("clear");
    input(a, n, sem);
    int y = jjj(a, n, searchmax(a,n));
    if(y == 1)
    {
        maxout(searchmax(a, n) , searchind(a, n, searchmax(a,n)));
    }
    else{
        maxmany(a, n);
    }
    delete[]a;

}
