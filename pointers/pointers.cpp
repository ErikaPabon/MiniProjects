// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void print1(int [], int);
void print2(int*, int);
void swap(int*, int*);
int f1(int);


int main()
{
	int x = 10;
	int z;
	double y = 1.5;

	int* px;
	int* pz;
	double* py;

	px = &x;
	py = &y;
	pz = &z;

	cout << x << " , " << y << endl;
	cout << &x << " , " << &y << endl;
	cout << px << " , " << py << endl;
	cout << "-----------------------" << endl;

	*px = 20; // x = 20
	*py = 7.5;  //y = 7.5
	cout << x << " , " << y << endl;
	cout << &x << " , " << &y << endl;
	cout << px << " , " << py << endl;
	cout << "------------------" << endl;

	*px = *px + 10; // 
	cout << x << endl;

	*pz = *pz * 2; // z = x * 2;
	cout << z << endl;
	*pz = *pz * *px; // z = z * x;
	cout << z << endl;
	cout << "---------" << endl;

	cout << z << " , " << x << endl;
	int temp = *px; //temp = x;
	*px = *pz; // x = z;
	*pz = temp; // z = temp;
	cout << z << " , " << x << endl;
	cout << "-----------------------" << endl;

	int arr[] = { 1, 3, 5, 7, 9, 11 };
	cout << arr << endl;
	cout << arr[0] << ", " << *arr << endl;
	cout << arr[1] << " , " << *(arr + 1) << endl;
	cout << "-------------------" << endl;


	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " , " << *(arr + i) << " , " << (arr + i) << endl;
	}

	int* arr1;
	arr1 = new int[5]{ 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++) {
		cout << arr1[i] << endl;
	}
	cout << "--------------------" << endl;



	print1(arr, 6);
	cout << endl;
	print1(arr1, 5);
	cout << endl;
	cout << "-------------------" << endl;


	print2(arr, 6);
	cout << endl;
	print2(arr1, 5);
	cout << endl;


	cout << x << " , " << z << endl; //swap(x, z);
	swap(&x, &z);
	cout << x << " , " << z << endl;

}

	void print1(int arr[], int size)
	{
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " , ";
		}
	}

	void print2(int* arr, int size)
	{
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " , ";
		}
	}

	void swap(int* p, int* q)
	{
		int temp = *p;
		*p = *q;
		*q = temp;
	}

	int f1(int x)
	{

		return 3 * x;
	}
