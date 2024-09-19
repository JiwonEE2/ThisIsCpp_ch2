#include<iostream>
using namespace std;

// nParam 매개변수의 디폴트 값은 10
int TestFunc(int nParam = 10) {
	return nParam;
}

int main() {
	// 호출자가 실인수를 기술하지 않았으므로 디폴트 값 적용
	cout << TestFunc() << endl;

	// 호출자가 실인수를 확정했으므로 디폴트 값 무시
	cout << TestFunc(20) << endl;

	return 0;
}