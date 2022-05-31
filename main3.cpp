/*
#include <iostream>

using namespace std;

constexpr int fac(int n) {
	return n > 1 ? n * fac(n - 1) : 1;
}


int main()
{
	int x = 2147483648;  // unsigned(
	cout << "x =" << x << endl;


	int	someInteger	 = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;   // 257
	someInteger *= 2;  //  514  (someinteger + someinteger)
	someShort = static_cast<short>(someInteger); // 514
	someLong = someShort * 10000;   //  514 * 10000 = 5140000
	someFloat = someLong + 0.785f;  //  5140000.758  float 은 표현가능숫자 7자리 이후자리는날아감
	someDouble = static_cast<double>(someFloat) / 100000;  // 나누기 51.40000758
	cout << someDouble << endl;

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "secondNum : ";
	cin >> secondNum ;
	cout << "Sum : ";
	cout << firstNum + secondNum << endl;

	const int a = 0;  // const 컨스트란 상수 한번 값을 넣으면 수정못하
	constexpr int b = fac(4);   // 처음컴파일 할때 미리 값을 정해줄때?


}
*/