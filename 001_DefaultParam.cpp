#include<iostream>
using namespace std;

// nParam �Ű������� ����Ʈ ���� 10
int TestFunc(int nParam = 10) {
	return nParam;
}

int main() {
	// ȣ���ڰ� ���μ��� ������� �ʾ����Ƿ� ����Ʈ �� ����
	cout << TestFunc() << endl;

	// ȣ���ڰ� ���μ��� Ȯ�������Ƿ� ����Ʈ �� ����
	cout << TestFunc(20) << endl;

	return 0;
}