#include "input.h"
using namespace std;
void input(int limit, char chartext[], int inttext[],int openk,int P)
{
    cout << "������ ����� ���, �� ��� �� ����������� " << limit << " ������� (������� �������� � ��� ������)\n";
    cin >> chartext;
    for (int i = 0;i < limit;i++)
    {
        switch (chartext[i])
        {
        case '�':
            inttext[i] = 15;
            break;
        case '�':
            inttext[i] = 19;
            break;
        case '�':
            inttext[i] = 31;
            break;
        case '�':
            inttext[i] = 45;
            break;
        case '�':
            inttext[i] = 72;
            break;
        case '�':
            inttext[i] = 21;
            break;
        case '�':
            inttext[i] = 39;
            break;
        case '�':
            inttext[i] = 97;
            break;
        case '�':
            inttext[i] = 74;
            break;
        case '�':
            inttext[i] = 51;
            break;
        case '�':
            inttext[i] = 28;
            break;
        case '�':
            inttext[i] = 65;
            break;
        case '�':
            inttext[i] = 18;
            break;
        case '�':
            inttext[i] = 33;
            break;
        case '�':
            inttext[i] = 83;
            break;
        case '�':
            inttext[i] = 85;
            break;
        case '�':
            inttext[i] = 40;
            break;
        case '�':
            inttext[i] = 57;
            break;
        case '�':
            inttext[i] = 43;
            break;
        case '�':
            inttext[i] = 77;
            break;
        case '�':
            inttext[i] = 88;
            break;
        case '�':
            inttext[i] = 14;
            break;
        case '�':
            inttext[i] = 11;
            break;
        case '�':
            inttext[i] = 29;
            break;
        case '�':
            inttext[i] = 76;
            break;
        case '�':
            inttext[i] = 44;
            break;
        case '�':
            inttext[i] = 22;
            break;
        case '�':
            inttext[i] = 41;
            break;
        case '�':
            inttext[i] = 35;
            break;
        case '�':
            inttext[i] = 67;
            break;
        case '�':
            inttext[i] = 56;
            break;
        case '�':
            inttext[i] = 54;
            break;
        case '�':
            inttext[i] = 17;
            break;
        case '-':
            inttext[i] = 79;
            break;
        case '.':
            inttext[i] = 84;
            break;
        case ',':
            inttext[i] = 99;
            break;
        case '(':
            inttext[i] = 58;
            break;
        case ')':
            inttext[i] = 73;
            break;
        case '?':
            inttext[i] = 66;
            break;
        default:
            inttext[i] = 10;
            break;
        }
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