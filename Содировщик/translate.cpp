#include "translate.h"
using namespace std;
void translate(int limit, char chartext[], int inttext[])
{
    for (int i = 0;i < limit;i++)
    {
        switch (inttext[i])
        {
        case 15:
            chartext[i] = 'a';
            break;
        case 19:
            chartext[i] = '�';
            break;
        case 31:
            chartext[i] = '�';
            break;
        case 45:
            chartext[i] = '�';
            break;
        case 72:
            chartext[i] = '�';
            break;
        case 21:
            chartext[i] = '�';
            break;
        case 39:
            chartext[i] = '�';
            break;
        case 97:
            chartext[i] = '�';
            break;
        case 74:
            chartext[i] = '�';
            break;
        case 51:
            chartext[i] = '�';
            break;
        case 28:
            chartext[i] = '�';
            break;
        case 65:
            chartext[i] = '�';
            break;
        case 18:
            chartext[i] = '�';
            break;
        case 33:
            chartext[i] = '�';
            break;
        case 83:
            chartext[i] = '�';
            break;
        case 85:
            chartext[i] = '�';
            break;
        case 40:
            chartext[i] = '�';
            break;
        case 57:
            chartext[i] = '�';
            break;
        case 43:
            chartext[i] = '�';
            break;
        case 77:
            chartext[i] = '�';
            break;
        case 88:
            chartext[i] = '�';
            break;
        case 14:
            chartext[i] = '�';
            break;
        case 11:
            chartext[i] = '�';
            break;
        case 29:
            chartext[i] = '�';
            break;
        case 76:
            chartext[i] = '�';
            break;
        case 44:
            chartext[i] = '�';
            break;
        case 22:
            chartext[i] = '�';
            break;
        case 41:
            chartext[i] = '�';
            break;
        case 35:
            chartext[i] = '�';
            break;
        case 67:
            chartext[i] = '�';
            break;
        case 56:
            chartext[i] = '�';
            break;
        case 54:
            chartext[i] = '�';
            break;
        case 17:
            chartext[i] = '�';
            break;
        case 79:
            chartext[i] = '-';
            break;
        case 84:
            chartext[i] = '.';
            break;
        case 99:
            chartext[i] = ',';
            break;
        case 58:
            chartext[i] = '(';
            break;
        case 73:
            chartext[i] = ')';
            break;
        case 66:
            chartext[i] = '?';
            break;
        default:
            chartext[i]=' ';
            break;
        }
        //� ��������� �������� ����� ���!
    }
    cout << "������������ �����:";
    for (int i = 0;i < limit;i++)
    {
        cout << chartext[i];
    }
}