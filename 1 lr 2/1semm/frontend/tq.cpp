#include "array.h"
 void tq(float* a ,int &n, int sem)
 {
    system("clear");
    input(a, n, sem);
    float l, h;
    do
    {
        lowmod();
        cin >> l;
        highmod();
        cin >>h;
        if(l >= h){
            errormod();
        }
    }while(l >=h);
    modul(a, n, l, h);
    delete []a;
 }
