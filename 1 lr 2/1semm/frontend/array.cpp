#include "array.h"
void massive()
{
    int n = 0;
        float* a = nullptr;
        char sem;
        char exit;
        
    while (true)
    {
       
        cout << "Для завершения нажмите 'Y'. Для продолжения нажмите любую лругую клавищу -> ";
        if (!(cin >> exit))
            return;
        if(exit=='y'|| exit=='Y')
            break;

        cout  <<"введите номер семинара(1-3) " <<endl <<"0 - выход" <<endl;
        if (!(cin >> sem))
            return;

        switch(sem)
        {
            case '0':
                return;
            case '1':
            {
                fq(a, n, sem - '0');
                break;
            }    
            case '2':
            {
                sq(a,n,sem - '0');
                break;
            }
            case '3':
            {
                tq(a,n, sem - '0');
                break;
            }
            default: cout << "Неправильный выбор!\n"; break;
        }


    }

}
