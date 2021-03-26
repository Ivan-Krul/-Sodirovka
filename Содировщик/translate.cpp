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
            chartext[i] = 'б';
            break;
        case 31:
            chartext[i] = 'в';
            break;
        case 45:
            chartext[i] = 'г';
            break;
        case 72:
            chartext[i] = 'ґ';
            break;
        case 21:
            chartext[i] = 'д';
            break;
        case 39:
            chartext[i] = 'е';
            break;
        case 97:
            chartext[i] = 'є';
            break;
        case 74:
            chartext[i] = 'ж';
            break;
        case 51:
            chartext[i] = 'з';
            break;
        case 28:
            chartext[i] = 'и';
            break;
        case 65:
            chartext[i] = 'і';
            break;
        case 18:
            chartext[i] = 'ї';
            break;
        case 33:
            chartext[i] = 'й';
            break;
        case 83:
            chartext[i] = 'к';
            break;
        case 85:
            chartext[i] = 'л';
            break;
        case 40:
            chartext[i] = 'м';
            break;
        case 57:
            chartext[i] = 'н';
            break;
        case 43:
            chartext[i] = 'о';
            break;
        case 77:
            chartext[i] = 'п';
            break;
        case 88:
            chartext[i] = 'р';
            break;
        case 14:
            chartext[i] = 'с';
            break;
        case 11:
            chartext[i] = 'т';
            break;
        case 29:
            chartext[i] = 'у';
            break;
        case 76:
            chartext[i] = 'ф';
            break;
        case 44:
            chartext[i] = 'х';
            break;
        case 22:
            chartext[i] = 'ц';
            break;
        case 41:
            chartext[i] = 'ч';
            break;
        case 35:
            chartext[i] = 'ш';
            break;
        case 67:
            chartext[i] = 'щ';
            break;
        case 56:
            chartext[i] = 'ь';
            break;
        case 54:
            chartext[i] = 'ю';
            break;
        case 17:
            chartext[i] = 'я';
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
        //зі словником особливе дякую Дані!
    }
    cout << "Зашифрований текст:";
    for (int i = 0;i < limit;i++)
    {
        cout << chartext[i];
    }
}