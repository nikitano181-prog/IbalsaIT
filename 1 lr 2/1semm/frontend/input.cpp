#include "array.h"
void input(float*& a, int& n, int s)
{
    float m;
    int ind;
    if(s == 2)
    {
        do
        {sizein();
            cin >> n;
                if(n <= 2)
                {
                    badsize();
                }
        }while(n <= 2);
        a = new float[n];
        do
        {
                elemsin();
                for(int i = 0; i < n; ++i)
                {
                    cin >> a[i];
                }
                m = zero(a, n);
                ind = searchind2(a, n, m);
        }while(ind < 2);        
    }
    if(s != 2)
    {
        do
        {sizein();
            cin >> n;
                if(n <= 0)
                {
                    badsize();
                }
        }while(n <=0);
        a = new float[n];
        elemsin();
        for(int i = 0; i < n; ++i)
        {
        cin >> a[i];
        }
    }
}
