// Pointer is a number that stores/host memory address
#include <iostream>
#include <vector>
using namespace std;
#define LOG(x) cout << x << endl

void Increment(int* value) {
	(*value)++;
}
class Player {
public:
	int x, y;
	int speed;
};

void HelloFunctionPtr() {
	cout << "Hello Function pointer" << endl;
}
void PrintValue(int value) {
	cout << "Value: " << value << endl;
}
void ForEach(vector<int>& values, void(*func)(int)) {
	for (int value : values) {
		func(value);
	}
}

int main() {
	int var = 8;

	int* ptr = &var; // &: Hei what is your memory address
	//char* strPtr = 'Hoang cong Anh';
	*ptr = 10;
	LOG(ptr);
	LOG(*ptr);
	LOG(var);

	//Char pointer
	char* buffer = new char[8];
	memset(buffer, 0, 8);
	delete[] buffer;

	int a = 5;
	int* b = &a; // b lay dia chi cua a
	// -> Neu thay doi gia tri cua b, thi a cung thay doi theo
	
	int& ref = a;// Create a reference. When creating a ref, it must refer something ( int& ref; is wrong)
	Increment(&a);
	LOG(a);
	ref = 2;
	LOG(a);
//	cout << "strPtr[0]: " << strPtr[0];

	int x, y;
	int speed = 2;
	Player player;
	player.x = 0;

	// Function pointer
	void(*cherno)()  = HelloFunctionPtr; // Assign the function's memory
	cherno();
	cherno();

	vector<int> values = { 1,4,5,3,4,2 };
	ForEach(values, PrintValue);
	// Define a lamdas function
	ForEach(values, [](int value) {cout << "Value: " << value << endl; });

	cin.get();
}