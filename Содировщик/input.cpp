#include "input.h"
using namespace std;
map<char, int> translate{
    {'�', 15}, {'�', 19}, {'�', 31},
    {'�', 45}, {'�', 72}, {'�', 21},
    {'�', 39}, {'�',  97},{'�', 74},
    {'�', 51}, {'�', 28}, {'�', 65},
    {'�', 18}, {'�', 33}, {'�', 83}, };
void input(int limit, char chartext[], int inttext[],int openk,int P)
{
    
    cout << "������ ����� ���, �� ��� �� ����������� " << limit << " ������� (������� �������� � ��� ������)\n";
    cin >> chartext;
    for (int i = 0;i < limit;i++)
    {
        inttext[i] = translate[chartext[i]];
        //case '�':
        //    inttext[i] = 85;
        //    break;
        //case '�':
        //    inttext[i] = 40;
        //    break;
        //case '�':
        //    inttext[i] = 57;
        //    break;
        //case '�':
        //    inttext[i] = 43;
        //    break;
        //case '�':
        //    inttext[i] = 77;
        //    break;
        //case '�':
        //    inttext[i] = 88;
        //    break;
        //case '�':
        //    inttext[i] = 14;
        //    break;
        //case '�':
        //    inttext[i] = 11;
        //    break;
        //case '�':
        //    inttext[i] = 29;
        //    break;
        //case '�':
        //    inttext[i] = 76;
        //    break;
        //case '�':
        //    inttext[i] = 44;
        //    break;
        //case '�':
        //    inttext[i] = 22;
        //    break;
        //case '�':
        //    inttext[i] = 41;
        //    break;
        //case '�':
        //    inttext[i] = 35;
        //    break;
        //case '�':
        //    inttext[i] = 67;
        //    break;
        //case '�':
        //    inttext[i] = 56;
        //    break;
        //case '�':
        //    inttext[i] = 54;
        //    break;
        //case '�':
        //    inttext[i] = 17;
        //    break;
        //case '-':
        //    inttext[i] = 79;
        //    break;
        //case '.':
        //    inttext[i] = 84;
        //    break;
        //case ',':
        //    inttext[i] = 99;
        //    break;
        //case '(':
        //    inttext[i] = 58;
        //    break;
        //case ')':
        //    inttext[i] = 73;
        //    break;
        //case '?':
        //    inttext[i] = 66;
        //    break;
        //case '!':
        //    inttext[i] = 34;
        //    break;
        //case '0':
        //    inttext[i] = 25;
        //    break;
        //case '1':
        //    inttext[i] = 92;
        //    break;
        //case '2':
        //    inttext[i] = 59;
        //    break;
        //default:
        //    inttext[i] = 10;
        //    break;
        //}
    }
    cout << "������������ �����:";
    for (int i = 0;i < limit;i++)
    {
        inttext[i] = (inttext[i]^P)%openk;
    }
    for (int i = 0;i < limit;i++)
    {
        cout << inttext[i] << " ";
    }
}