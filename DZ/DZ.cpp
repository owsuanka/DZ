﻿#include <iostream>
#include <string>
#include <Windows.h> 
using namespace std;
int main()
{
   SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    int arr[3][3] = { {4,-2,9},{1,0,7},{-8,-3,6} };
    float sum = { 0.0 };
    float sred = { 0.0 };
    int count = 0;
    

    cout << "Положительные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] >= 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
     
    cout << "Отрицательные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] < 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;


	
    cout << "Четные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] %2 == 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Нчетные эл-ты: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;


	
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            sum += arr[i][j];
        }

    }
    cout << "Сумма значений элементов массива: " << sum << endl;
    

	
    sum = 0;
    for (size_t i = 0; i < size(arr); i++)
    {
        for (size_t j = 0; j < size(arr); j++)
        {
            sum += arr[i][j];
            count++;
        }

    }
    sr = sum / count;
    cout << "Среднее значение = " << sr << endl;
}
