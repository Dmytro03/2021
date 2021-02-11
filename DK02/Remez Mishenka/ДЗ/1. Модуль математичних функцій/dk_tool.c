#include "dk_tool.h"

#define OCT 8          // ��������� ����� ��� ������� ������������ ������        

int Convert_Oct_to_Dec(char* arr)        // ���� ������� ��� ������ ����� arr (���������� �� array)
{
    int dec = 0, counter_stepen = 0;
    for (int i = strlen_buffer(arr) - 1; i >= 0; i--)     // ��� ����� �������� ���� �������� �� ������ ���� ��� (���. 59 ������)
    {
        if ((arr[i] > 47) && (arr[i] < 56))
        {
            arr[i] -= 48;
        }
        else
        {
            printf("������� ��������� ������");
            return -1;
        }
        dec += arr[i] * stepen(OCT, counter_stepen);
        counter_stepen++;
    }
    return dec;     // ������� ������� ���� int - ���� ������� ������� ����� � ��������� ����
}

int strlen_buffer(char* buffer)
{
    int res = 0;
    while ((*buffer != '\n') && (*buffer != '\0'))
    {
        buffer++;
        res++;
    }
    return res;
}

int stepen(int x, int a)
{
    int result = 1;
    for (int i = 0; i < a; i++)
    {
        result *= x;
    }
    return result;
}