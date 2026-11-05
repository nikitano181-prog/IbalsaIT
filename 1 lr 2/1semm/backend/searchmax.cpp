#include "files.h"
float searchmax(float a[], int n)
{
    float max = a[0];
    for(int i = 0; i < n; ++i)
    {
        if(a[i] > max){
            max = a[i];
        }
    }
        return max;
}