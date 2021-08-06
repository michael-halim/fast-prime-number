#include<iostream>
#include<time.h>
using namespace std;
#define NUM 10

bool checkPrime(int n) {
	for (int i = 2; i*i < n; i++)
		if (n % i == 0)
			return false;
	return true;
}

//int sumAll(int* arr, int start, int end) {
//	int middle = (start + end) / 2;
//
//	if (abs(end - start) == 1) return arr[start] + arr[end];
//	else if (abs(end - start) == 0) return arr[end];
//
//	return sumAll(arr,start,middle) + sumAll(arr, middle + 1, end);
//}

//rekursi adalah fungsi yang memanggi fungsi itu sendiri 
//1. memanggil fungsi itu sendiri
//2. Base case nya 

// 1 1 2 3 5 8 13 21

int fib(int n) {
	if (n <= 2) return 1;

	return fib(n - 1) + fib(n - 2);
}

int main() {
	srand(time(NULL));

	cout << fib(8) << endl;
}

