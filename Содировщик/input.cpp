#include "input.h"
using namespace std;
void input(int limit, char chartext[], int inttext[],int openk,int P)
{
    cout << "Введіть текст так, що ліміт не перевищував " << limit << " символів (бажанно українські і без пробілів)\n";
    cin >> chartext;
    for (int i = 0;i < limit;i++)
    {
        switch (chartext[i])
        {
        case 'а':
            inttext[i] = 15;
            break;
        case 'б':
            inttext[i] = 19;
            break;
        case 'в':
            inttext[i] = 31;
            break;
        case 'г':
            inttext[i] = 45;
            break;
        case 'ґ':
            inttext[i] = 72;
            break;
        case 'д':
            inttext[i] = 21;
            break;
        case 'е':
            inttext[i] = 39;
            break;
        case 'є':
            inttext[i] = 97;
            break;
        case 'ж':
            inttext[i] = 74;
            break;
        case 'з':
            inttext[i] = 51;
            break;
        case 'и':
            inttext[i] = 28;
            break;
        case 'і':
            inttext[i] = 65;
            break;
        case 'ї':
            inttext[i] = 18;
            break;
        case 'й':
            inttext[i] = 33;
            break;
        case 'к':
            inttext[i] = 83;
            break;
        case 'л':
            inttext[i] = 85;
            break;
        case 'м':
            inttext[i] = 40;
            break;
        case 'н':
            inttext[i] = 57;
            break;
        case 'о':
            inttext[i] = 43;
            break;
        case 'п':
            inttext[i] = 77;
            break;
        case 'р':
            inttext[i] = 88;
            break;
        case 'с':
            inttext[i] = 14;
            break;
        case 'т':
            inttext[i] = 11;
            break;
        case 'у':
            inttext[i] = 29;
            break;
        case 'ф':
            inttext[i] = 76;
            break;
        case 'х':
            inttext[i] = 44;
            break;
        case 'ц':
            inttext[i] = 22;
            break;
        case 'ч':
            inttext[i] = 41;
            break;
        case 'ш':
            inttext[i] = 35;
            break;
        case 'щ':
            inttext[i] = 67;
            break;
        case 'ь':
            inttext[i] = 56;
            break;
        case 'ю':
            inttext[i] = 54;
            break;
        case 'я':
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
    cout << "Зашифрований текст:";
    for (int i = 0;i < limit;i++)
    {
        inttext[i] = (inttext[i]^P)%openk;
    }
    for (int i = 0;i < limit;i++)
    {
        cout << inttext[i] << " ";
    }
}