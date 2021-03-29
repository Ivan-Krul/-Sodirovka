#include "input.h"
using namespace std;
map<char, int> translate{
    {'а', 15}, {'б', 19}, {'в', 31},
    {'г', 45}, {'ґ', 72}, {'д', 21},
    {'е', 39}, {'є',  97},{'ж', 74},
    {'з', 51}, {'и', 28}, {'і', 65},
    {'ї', 18}, {'й', 33}, {'к', 83}, };
void input(int limit, char chartext[], int inttext[],int openk,int P)
{
    
    cout << "Введіть текст так, що ліміт не перевищував " << limit << " символів (бажанно українські і без пробілів)\n";
    cin >> chartext;
    for (int i = 0;i < limit;i++)
    {
        inttext[i] = translate[chartext[i]];
        //case 'л':
        //    inttext[i] = 85;
        //    break;
        //case 'м':
        //    inttext[i] = 40;
        //    break;
        //case 'н':
        //    inttext[i] = 57;
        //    break;
        //case 'о':
        //    inttext[i] = 43;
        //    break;
        //case 'п':
        //    inttext[i] = 77;
        //    break;
        //case 'р':
        //    inttext[i] = 88;
        //    break;
        //case 'с':
        //    inttext[i] = 14;
        //    break;
        //case 'т':
        //    inttext[i] = 11;
        //    break;
        //case 'у':
        //    inttext[i] = 29;
        //    break;
        //case 'ф':
        //    inttext[i] = 76;
        //    break;
        //case 'х':
        //    inttext[i] = 44;
        //    break;
        //case 'ц':
        //    inttext[i] = 22;
        //    break;
        //case 'ч':
        //    inttext[i] = 41;
        //    break;
        //case 'ш':
        //    inttext[i] = 35;
        //    break;
        //case 'щ':
        //    inttext[i] = 67;
        //    break;
        //case 'ь':
        //    inttext[i] = 56;
        //    break;
        //case 'ю':
        //    inttext[i] = 54;
        //    break;
        //case 'я':
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