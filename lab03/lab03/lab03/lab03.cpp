#include <iostream>
#include <chrono>
#include <Windows.h>
using namespace std;

void BubbleSort(int* arrayB, int N);
void ShellSort(int* arrayC, int N);
void SelectionSort(int* arrayD, int N);
void QuickSort(int* arrayE, int first, int last);


int main() {
	setlocale(LC_ALL, "rus");
	int N;

	cout << "Введите размер массива: ";
	cin >> N;

	int* arrayA = new int[N];

	cout << "Массив А(B, C, D, E): ";
	for (int i = 0; i <= N; i++) {
		arrayA[i] = rand()%100;
		cout << arrayA[i] << " ";
	}
	cout << endl;

	int* arrayB = arrayA, * arrayC = arrayA, * arrayD = arrayA, * arrayE = arrayA;
	
	BubbleSort((int*)arrayB, (int)N);
	ShellSort((int*)arrayC, (int)N);
	SelectionSort((int*)arrayD, (int)N);

	float a, b;

	a = clock();
	QuickSort(arrayE,0,N);
	b = clock();
	cout << "Отсортированный массив: ";
	for (int i = 0; i <= N; i++) {
		cout << arrayE[i] << " ";
	}
	cout << endl << "Время: " << (b - a) / 1000 << endl;
}

void BubbleSort(int * arrayB, int N) {
	setlocale(LC_ALL, "rus");
	float a, b;

	a = clock();
	for (int i = 0; i < N - 1; i++) {

		for (int j = 0; j < N - i - 2; j++) {

			if (arrayB[j] > arrayB[j + 1]) {

				swap(arrayB[j], arrayB[j + 1]);
			}
		}
	}
	b = clock();

	cout << "Отсортированный массив: ";
	for (int i = 0; i <= N; i++) {
		cout << arrayB[i] << " ";
	}
	cout << endl << "Время: " << (b - a) / 1000 << endl;
}

void ShellSort(int* arrayC, int N) {
	setlocale(LC_ALL, "rus");
	int buff;
	float a, b;

	a = clock();
	for (int i = 1; i < N; i++) {

		buff = arrayC[i];

		for (int j = i - 1; j >= 0 && arrayC[j] > buff; j--) {
			arrayC[j + 1] = arrayC[j];
			arrayC[j + 1] = buff;
		}
	}
	b = clock();

	cout << "Отсортированный массив: ";
	for (int i = 0; i <= N; i++) {
		cout << arrayC[i] << " ";
	}

	cout << endl << "Время: " << (b - a) / 1000 << endl;
}

void SelectionSort(int* arrayD, int N) {
	setlocale(LC_ALL, "rus");
	int min, buf;
	float a, b;

	a = clock();
	for (int i = 0; i < N; i++) {

		min = i;

		for (int j = i + 1; j < N; j++) {

			min = (arrayD[j] < arrayD[min]) ? j : min;
		}

		if (i != min) {

			buf = arrayD[i];
			arrayD[i] = arrayD[min];
			arrayD[min] = buf;
		}
	}
	b = clock();

	cout << "Отсортированный массив: ";
	for (int i = 0; i <= N; i++) {
		cout << arrayD[i] << " ";
	}

	cout << endl << "Время: " << (b - a) / 1000 << endl;
}

void QuickSort(int* arrayE, int first, int last) {
	setlocale(LC_ALL, "rus");
	int mid, count;
	int f = first, l = last;
	mid = arrayE[(f + l) / 2];

	do
	{
		while (arrayE[f] < mid) f++;
		while (arrayE[l] > mid) l--;
		if (f <= l) {

			count = arrayE[f];
			arrayE[f] = arrayE[l];
			arrayE[l] = count;
			f++;
			l--;
		}
	} while (f <= l);

	if (first < l) QuickSort(arrayE, first, l);
	if (f < last) QuickSort(arrayE, f, last);

	
}
