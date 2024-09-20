#include<iostream>
using namespace std;

namespace TEST {
	int g_nData = 100;

	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

int main() {
	// :: -> 지정연산자
	TEST::TestFunc();
	cout << TEST::g_nData << endl;

	return 0;
}