#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int X, N, choice, num;

	cout << "enter a N number: ";
	cin >> N;

	if (N == 0) {
		cout << "N не может быть равно 0!" << endl;
		cout << "enter a N number: ";
		cin >> N;
	}

	srand(time(NULL));
	X = rand() % N+1;
	cout << "number X = " << X << endl;

	int startNum = 1, endNum=N+1, i=0;

	while (true) {
		i += 1;
		num = (((endNum - startNum) / 2) + startNum);
		cout << "Num = " << num << "?" << endl;
		cout << "1 - Yes; 2 - More; 3 - Less." << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Awesome!" << endl;
			cout << "Max number of steps: " << int((log(N) / log(2)) + 1) << endl;
			cout << "Current number of steps: " << i;
			exit(0);
		case 2:
			startNum = num;
			break;
		case 3 :
			endNum = num;
			break;
		}
	}
}