#include "input.h"
using namespace std;
map<char, int> translate{
    {'�', 15}, {'�', 19}, {'�', 31},
    {'�', 45}, {'�', 72}, {'�', 21},
    {'�', 39}, {'�',  97},{'�', 74},
    {'�', 51}, {'�', 28}, {'�', 65},
    {'�', 18}, {'�', 33}, {'�', 83},
    {'�', 85},{'�', 40}, {'�', 57}, 
    {'�', 43},  {'�', 77},  {'�', 88}, 
    {'�', 14}, {'�', 11}, {'�', 29}, 
    {'�', 76}, {'�', 44}, {'�', 22}, 
    {'�', 41}, {'�', 35}, {'�', 67}, 
    {'�', 56}, {'�', 54}, {'�', 17}, 
    {'-', 79}, {'.', 84}, {',', 99},
    {'(', 58}, {')', 73}, {'?', 66},
    {'!', 34}, {'0', 25}, {'1', 92}, 
    {'2', 59}, {' ', 10}, };
void input(int limit, char chartext[], int inttext[],int openk,int P)
{
    cout << "������ ����� ���, �� ��� �� ����������� " << limit << " ������� (������� �������� � ��� ������)\n";
    cin >> chartext;
    for (int i = 0;i < limit;i++)
        inttext[i] = translate[chartext[i]];
    cout << "������������ �����:";
    for (int i = 0;i < limit;i++)
        inttext[i] = (inttext[i]^P)%openk;
    for (int i = 0;i < limit;i++)
        cout << inttext[i] << " ";
}