#include "files.h"
int jjj( float a[], int n,float m)
{
    int k = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == m){
            ++k;
        }
    }
    return k;
}