#include <iostream>
#include <math.h>
#include <map>
#include <Windows.h>
#include "randie.h"
#include "input.h"
#include "translate.h"

using namespace std;

const int limit = 256;
int crypto_power = 1000;
int inttext[limit];
bool ch = true;
char chartext[limit];

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A = randie(crypto_power);
    int B = randie(crypto_power);
    int N= A * B;
    int P, k = randie(crypto_power) + 1, K = 1,E;
    cout << "<программа содировщик>\nХочете получити лист?(1 -> так/0 -> ні)\n";
    cin >> ch;
    if (ch)
    {   
        P = (A - 1) * (B - 1);
        while (P % k != 0)
            k = randie(crypto_power) + 1;
        E = P / k;
        while ((P * K + 1) % E==0)
            K++;
        int D = (P * K + 1) / E;

        cout << "\nПін:" << N <<" "<< E;
        cout << "\nВедіть шифр:";
        /*try
        {
            for (int i = 0;i < limit;i++)
            {
                cin >> inttext[i];
                if (inttext[i] == 0)
                    throw i;
            }
            
        }
        catch (int a)
        {
            cout << "error input <input text <" << a << "> >";
            for (int i = a;i < limit;i++)
            {
                cin >> inttext[i];
                if (inttext[i] == 0)
                    throw i;
            }

        }*/
        for (int i = 0;i < limit;i++)
        {
            cin >> inttext[i];
        }
        for (int i = 0;i < limit;i++)
        {
            inttext[i] = (inttext[i] ^ E) % N;
        }
        translate(limit, chartext, inttext);
    }
    else
    {
        cout << "\nВедіть Пін:";
        cin >> N>>E;
        input(limit, chartext, inttext,N,E);
        
        
       
    }
    system("PAUSE");
    return 0;
}

