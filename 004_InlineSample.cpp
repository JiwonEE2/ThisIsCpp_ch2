#include<iostream>
using namespace std;

// ��ũ��
#define ADD(a,b)(a+b)

// �Ϲ� �Լ�
int Add(int a, int b) {
	return a + b;
}

// �ζ��� �Լ�
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