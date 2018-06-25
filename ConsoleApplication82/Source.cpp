#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>
#include<time.h>
#include<algorithm>
#include<windows.h>

using namespace std;
int main()
{
	HANDLE Hconsole;
	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	srand(time(NULL));
	int task;
	cin >> task;
	if (task == 1)
	{
		/*1.	Пользователь вводит два числа.Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.*/
		int a, b;
		a = 1 + rand() % 100;
		b = 1 + rand() % 100;
		if (a == b)
		{
			cout << "chisla ravny" << endl;
		}
		else
		{
			
			cout << min(a,b) << endl;
			cout << max(a,b) << endl;
		}
	}
	if (task == 2)
	{
		/*2.	Пользователь с клавиатуры вводит 5 оценок студента.Определить, допущен ли студент к экзамену.Студент получает допуск, 
		если его средний балл 4 балла и выше*/
		double a, b, c, d, e;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		if ((a + b + c + d + e) / 5 >= 4)
		{
			cout << "dopushen" << endl;
		}
		else
		{
			cout << "Ne dopushen" << endl;
		}
	}
	if (task == 3)
	{
		/*3.	Пользователь с клавиатуры вводит 5 оценок студента.Определить, допущен ли студент к экзамену.Студент получает допуск, 
		если его средний балл 4 балла и выше*/
		//Повтор см. задание 2.
	}
	if (task == 4)
	{
		/*4.	Написать программу - калькулятор.Пользователь вводит два числа и выбирает арифметическое действие.Вывести на экран результат*/
		double a, b;
		int deistvie;
		cout << "Vvedite chisla" << endl;
		cin >> a;
		cin >> b;
		cout << "Vyberite deistvie 1-slozhenie, 2-vychitanie, 3-umnozhenie, 4-delenie" << endl;
		cin >> deistvie;
		switch (deistvie)
		{
		case 1:
		{
			cout << a + b << endl;
			break;
		}
		case 2:
		{
			cout << a - b << endl;
			break;
		}
		case 3:
		{
			cout << a*b << endl;
			break;
		}
		case 4:
		{
			cout << a / b << endl;
			break;
		}

		}
	}
	if (task == 5)
	{
		/*5.	Написать программу, которая по выбору пользователя меняет цвет консольного приложения.Пользователь может выбрать цвет шрифта
		и цвет фона*/
		int a, b, c;
		cout << "vvedite chislo" << endl;
		cin >> c;
		cout << "vyberite cvet fona" << endl;
		cout << "1-siniy, 2-zeleniy" << endl;
		cin >> a;
		cout << "vyberite cvet shrifta" << endl;
		cout << "1-siniy, 2-zeleniy" << endl;
		cin >> b;
		if (a == 1 && b == 2)
		{
			system("color 12");
			cout << c << endl;
		}
		else if (a == 2 && b == 1)
		{
			system("color 21");
			cout << c << endl;
			cout << "1, 2, 3" << endl;
		}
		else
			cout << "cvet bukv i fon sovpadayut!" << endl;

	}
	if (task == 6)
	{
		
			int a, b, c;
			cout << "vvedite chislo" << endl;
			cin >> a;
			cout << "vvedite stepen" << endl;
			cin >> b;
			c = pow(a, b);
			cout << c << endl;

		
	}
	if (task == 7)
	{
		/*7.	В час пик на остановку одновременно подъехали три маршрутных такси, следующие по одному маршруту, в которые тут же 
		набились пассажиры.Водители обнаружили, что количество людей в разных маршрутках разное, и решили пересадить часть пассажиров так, 
		чтобы в каждой маршрутке было поровну пассажиров.Требуется по количествам людей в трех маршрутках определить, какое наименьшее 
		количество пассажиров придаться при этом пересадить(если это вообще возможно)*/
		int a, b, c, d, x, y, z, v;
		cin >> a;
		cin >> b;
		cin >> c;

		d = (a + b + c);
		if (d % 3 == 0)
		{
			x = d / 3 - a;
			y = d / 3 - b;
			z = d / 3 - c;
			v = abs(min(min(x, y), z));
			cout << "s 1 ludei pridet/vyidet " << x << endl;
			cout << "so 2 ludei pridet/vyidet " << y << endl;
			cout << "s 1 ludei pridet/vyidet " << z << endl;
			cout << " vsego ludei vyidet " << v << endl;

		}
		if (d % 3 != 0)
		{
			cout << "ludei nelzya ravnomerno raspredelit" << endl;
		}
	}
}