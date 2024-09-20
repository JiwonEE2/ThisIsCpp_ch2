#include<iostream>
using namespace std;

// 매크로
#define ADD(a,b)(a+b)

// 일반 함수
int Add(int a, int b) {
	return a + b;
}

// 인라인 함수
inline int AddNew(int a, int b) {
	return a + b;
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << "ADD() : " << ADD(a, b) << "\n";
	cout << "Add() : " << Add(a, b) << "\n";
	cout << "AddNew() : " << AddNew(a, b) << "\n";

	return 0;
}