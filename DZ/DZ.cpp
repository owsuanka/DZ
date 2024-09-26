#include <iostream> 
#include <string>
#include <Windows.h> 
using namespace std;
int main()
{
	int a1 = 60; 
	int a2 = 60; 
	int b1 = 25;  
	int c1 = a1 && b1;
	int c2 = a1 || b1; 
	int c3 = a1 -- b1; 
	int c4 = a1 =+ b1; 
	int c5 = a1 != b1;
	int i = 0, b = 5;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	if (c1 > c3) 
		{ cout << "true" << endl;; }

	if (a1 == 3) 
		{
		cout << " Введите первое число " << endl; 
		cin >> b1; 
		cout << " Введите второе число " << endl;
		cin >> c1; 	
		int s1;
		si = b1 - c1
		cout << " Разность двух чисел = " << s1 << endl;
		}

	if (a1 != 5) 
		{
		cout << " Введите первое число " << endl; 
		cin >> w1;
		cout << " Введите второе число " << endl; 
		cin >> e1;
		r1 = w1 + e1 ; 
		cout << " Сумма двух чисел = " << r1 << endl;
		}
		
	if (a1 > b1 || c2 < c1) 
		{ 
		cout << "true" << endl; 
		}
	else 
		{ 
		cout << "false" << endl; 
		} 

	if (c5 < c3 || c5 < c3)
		{
		cout << "true" << endl;
		}
	else 
		{ 
		cout << "false" << endl; 
		}

	int i1 = 1;
	int i2 = 1;
	while (i < 10 && b < 10)
	{
		i++; 
		i1 = i1 + i1;  
		i2 = i2 + i2;
		cout << i1 << endl; 
		cout << i2 << endl;   
		b++;
	} 
}
