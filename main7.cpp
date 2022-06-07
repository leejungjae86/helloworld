/* #include <iostream>
#include <bitset>

using namespace std;

int main() {
	/* {
		cout << "*  *  *  *  *  *  *  *  *  *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*                          *" << endl;
		cout << "*  *  *  *  *  *  *  *  *  *" << endl;
		{

			int a, b = { 0 };
			cout << "A is ?";   // 프린트 출력
			cin >> a;           // 입력
			cout << "B is ?";
			cin >> b;
			cout << "A + B ?";

			cout << "16진수(A+B) = " << hex << uppercase << a + b << nouppercase << endl;  // uppercase = 대문자로출력
			
		}
		*/
		// A is ?
		// B is ?
		// 2개의 값을 받는다. (A+B ) 가 0보다 크면 true 작으면 false
		/*
			int a, b = { 0 };
			cout << "A is ?";
			cin >> a;
			cout << "B is ?";
			cin >> b;
			cout << "A + B ?";

			if (a - b > 0) {
				cout << "true" << endl;
			}
			else {
				cout << "false" << endl;
			}

			/*
			* 위에 하고 틀리지만 출력값은 같은식
			int A, B = {0};
			bool result = false;
			cout << "A is ?";
			cin >> a;
			cout << "B is ?";
			cin >> b;
			-> cout << " result = " (A - B > 0 ) ? true  : false << boolalpha << result << noboolalpha << endl;

			*/

			// A is ?  B is ? C is ?
			// 위와 같이 3개의 값을 받는다. A+B 가 C 보다 크면 A+B 값을 출력 C 가 A+B 보다 크면 C 값을 출력
			/*
			int a, b, c = { 0 };
			cout << "A is ?";
			cin >> a;
			cout << "B is ?";
			cin >> b;
			cout << "C is ?";
			cin >> c;

			if (a + b > c)
			{
				cout << a+b << endl;
			}
			else
			{
				cout << c << endl;

			} */

			// a= 2진수 : 10101010  b= 8진수 : 111  c= 16진수  : ff  a+b-c 를 출력하시오
			/*
			int a = 0b10101010;
			int b = 0111;
			int c = 0xff;

			cout << dec << a + b - c << endl;  // dec << 10진수로 표현하고싶을때

			*/
			// 정형화되고 확정된 값도출이기 때문에 초기화를 안넣어줘도 된다


			// A is  ? B is ? C is ?
			//  A가 B 보다 크고 A 가 C보다 작다 
			// 위에 두개 조건이 전부 참이면 true 하나의 조건이라도 거짓이면 false
/*
	int a, b, c = { 0 };

	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	if (c > a && a > b) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

} */