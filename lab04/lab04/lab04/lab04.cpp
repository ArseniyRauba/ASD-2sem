#include <iostream>
#include <time.h>
using namespace std;

void main() {
	//1
	//int N, a[10000];

	//cout << "Enter number of products: ";
	//cin >> N;

	//srand(time(NULL));
	//rand();

	//cout << "Prices of products: ";
	//for (int i = 0; i < N; i++) {
	//	a[i] = rand() % 100;
	//	cout << a[i] << " ";
	//}

	//for (int i = 0; i < N; i++) {
	//	for (int j = i; j < N; j++) {
	//		if (a[i] < a[j]) swap(a[i], a[j]);
	//	}
	//}

	//int count, sum = 0;

	//if (N % 2 == 0) {
	//	count = N / 2;
	//}
	//else {
	//	count = N / 2 + 1;
	//}

	//cout << endl;

	//for (int i = 0; i < N; i++) {
	//	if (i < count) {
	//		sum += a[i];
	//	}
	//}

		/*cout << "Max sum: " << sum;*/

	//2
	int N, a[10000];

	cout << "Enter number of participants: ";
	cin >> N;

	srand(time(NULL));
	rand();

	cout << "Results of participants: " << endl;
	for (int i = 0; i < N; i++) {
		a[i] = rand() % 100;
		cout << i + 1 << ": " << a[i] << endl;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}

	int count = 0, place = 0;
	for (int i = 0; i < N; i++) {
		cout << place + 1 << ": " << a[i] << endl;
		place++;
	}
	place = 0;
	for (int i = 0; i < N; i++) {
		if (a[i] != a[i - 1]) {
			if (place < 3) {
				cout << a[i] << endl;
			}
			place += 1;
		}
		if (place == 3) {
			count = i + 1;
		}
	}

	cout << "Count: " << count;
}