//#include <iostream>
//#include<chrono>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	long long num;
//	long long  num0 = 0, num1 = 1, i = 0, N;
//	float a, b;
//
//	cout << "Введите номер числа:";
//	cin >> N;
//
//	a = clock();
// 
//	while (i < N)
//	{
//		num = num0 + num1;
//		num0 = num1;
//		num1 = num;
//		i += 1;
//	}
//
//	cout << "Число: " << num1 << endl;
//	b = clock();
//	cout << "Время: " << (b - a) / 1000;
//}

#include <iostream>
#include <chrono>
using namespace std;

unsigned long long number(int n)
{
	if (n < 2) return 1;
	return number(n - 1) + number(n - 2);
}

int main()
{
	setlocale(LC_ALL, "rus");

	float a, b;
	int N, i;

	cout << "Введите номер числа:";
	cin >> N;

	a = clock();

	for (i = 0; i <= N; i++)
	{
		cout << number(i) << " ";
	}

	cout << endl;

	b = clock();
	cout << "Время: " << (b - a) / 1000;

	return 0;
}