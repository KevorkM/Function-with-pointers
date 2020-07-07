#include <iostream>

using namespace std;

//FuncionReturnType(*FunctionPtr)(ArgumentList);

int Sum(int Array[], int Length);

int Average(int array[], int Length);

void Output(int Array[], int Length, int (*Function)(int Array[], int Legth));

int main() {

	cout << "Function Pointers\n" << endl;

	int array[] = { 2,4,6,8,10 };

	Output(array, 5, Sum);
	Output(array, 5, Average);

	return 0;
}

int Sum(int Array[], int Length)
{
	int sum = 0;

	for (int i = 0; i < Length; i++) {
		sum += Array[i];
	}
	return sum;
}

int Average(int array[], int Length)
{
	return Sum(array, Length)/Length;
}

void Output(int Array[], int Length, int(*Function)(int Array[], int Legth))
{
	cout << "Result is: " << Function(Array, Length) << endl;
}