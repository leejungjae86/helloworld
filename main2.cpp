/*
#include <iostream>

using namespace std;

namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30;    // 전역? 변수  //

int main(int argc, char* argv[]) {
	int n = 40;    // 지역변수 //
	
	cout << myNS1::n << std::endl;     
	cout << myNS2::n << std::endl;
	cout << ::n << std::endl;
	cout << n << std::endl;

	float myFloat = 3.14f; << 3.14f 는 초기값넣어준거임
	int i1 = (int)myFloat;   // 비추천 
	int i2 = int(myFloat);   // 비추천
	int i3 = static_cast<int> (myFloat);  //  정확한 형변환 방법

// double 형 //
	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2;     // 12* (10^2)  *알파벳 e 는 십의자리 의미
	double d4 = 1.2e+3;    // 1.2* (10^3)
	double d4 = 1.2e-3;    // 1.2* (/10^3)

	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;

	
}
*/