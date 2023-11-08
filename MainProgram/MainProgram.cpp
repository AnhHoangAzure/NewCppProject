#include<iostream>
#include<vector>
using namespace std;
bool PositiveOrNegativeChecking(int number) {
	return (number >= 0) ? true : false;
}
int findGreatedNumber(vector<int> a) {
	int greatestNumber = a[0];
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= greatestNumber) {
			greatestNumber = a[i];
		}
	}
	return greatestNumber;
}

int solution(vector<int> a) {
	vector<int> b;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			if (a[i] == a[j]) {
				b.push_back(j);
				break;
			}
		}
	}
	if (b.size() == 0)
		return -1;
	for (int i = 0; i < b.size(); i++) {
		for (int j = i + 1; j < b.size(); j++) {
			if (b[j] < b[i]) {
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
	return a[b[0]];
}

int main() {
	int number = -10;
	int input;
	if (PositiveOrNegativeChecking(number)) {
		cout << number << " is positive" << endl;
	}
	else {
		cout << number << " is negative" << endl;
	}
	vector<int> a;
	cout << "Insert the 1st number: " << endl;
	cin >> input;
	a.push_back(input);
	cout << "Insert the 2nd number: " << endl;
	cin >> input;
	a.push_back(input);
	cout << "Insert the 3rd number: " << endl;
	cin >> input;
	a.push_back(input);
	cout << "Greatest number: " << findGreatedNumber(a) << endl;
}