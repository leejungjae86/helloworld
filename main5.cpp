/*
#include <iostream>
#include <bitset>  // bitset 이라는 기능 추가 <꺽쇠모양 > 은 표준화한다는..
 // cout << "2진수 표기 : " << bitset<32>(num) << endl;  // 밑에 이거 쓰기위해 씀

using namespace ::std;

int main()
{
	{
		int a = 10;
		int b = 0;    
		// b = a++;   // b = 10 , a = 11 
		// b = ++a;   // b = 11 , a = 11 
		// b = a--;   // b = 10 , a = 9 
		b = --a;      // b = 9 , a = 9
		// 먼저 값에 넣어주냐 나중에 넣어주냐 ++ , -- //

		cout << "a = " << a << "b = " << b << endl;
	}

	{
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false;      // true fales 에 숫자값을 넣을수있다
		result = (a == b) ? true : false;     // 책 73페이지 참고
		result = (a > 0 && b > 0) ? true : false;    // && = AND
		result = (a > 0 || b > 0) ? true : false;    // || = or 인데  \+ 쉬프트 
		result = (a < 0 && --b > 0) ? true : false;  //중요 a가 0보다 작은것이 거짓값이기에 뒤에 &&이후는 연산처리하지않음
		result = !(a > 0) ? true : false;   // ! = 정반대로 값을
		cout << "Reulst = " << boolalpha (true, false로표현) << result << noboolalpha(숫자로표현해줌) << " b = " << b << endl;
		// ? 연산
		// boolalpha 는 숫자를 문자로 표현하고싶을때 쓴다 noboolalha

	}
	{
		int num = 10; 
		cout << "2진수 표기 : " << bitset<32>(num) << endl;  
		cout << "8진수 표기 : " << dec << num << endl;   
		cout << "10진수 표기 : " << oct << num << endl;   
		cout << "16진수 표기 : " << hex << num << dec << endl;   //다시 8진수로

		// & = 비트 단위 AND 연산
		// | = 비트 단위 or 연산 ( 쉬프트 + \ )
		int x = 0x35;
		int y = 0xf0;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " y = " << bitset<8>(y) << endl;
		cout << " x & y = " << bitset<8>(x & y) << endl;  // AND
		cout << " x | y = " << bitset<8>(x | y) << endl;  // OR
		cout << " x ^ y = " << bitset<8>(x ^ y) << endl;  // XOR 배타적 논리합 ?
		cout << " ~x = " << bitset<8>(~x) << endl;  // x 를 반대로

		int x1 = x << 2;  // 2단계로 왼쪽으로 미는거 (심플)
		cout << " x = " << bitset<8>(x) << endl;
		cout << " x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;  
		cout << " cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;     // 2; 는 여기서 2단계 민다 나만의 암호화 할때 , char (캐릭터?) 오른쪽으로 미는거
		cout << " cX = " << bitset<8>(cX) << endl;

	}
	{
		//  묵시적 형 변환 (물어보지않고 요청안해도 바꿈)
		// 아래 서로다른 형이지만 암말안하고 변형
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		// 자료형 우선순위 - 실수 - 오른쪽으로 갈수록 싸이즈가 크고, 실수인 형태가 우선
		// char -> int -> long -> float -> double -> long double  오른쪽으로 갈수록 크고 크기가 큰게 우선순위
		intVar = doubleVar + intVar * floatVar;
		//                   여기는 1차적으로 float 여기서 = 는 만나서 아래서 int 로 변환??
		//  doubleVar + (intVar * floatVar)
		//             double
		// inVar = ( double + (intVar * floatVar))
		//      int 

	}
	{
		// staatic_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함
		// dynamic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
		// reinterpret_cast : 포인터를 다름 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함 (그냥알아만두자)
		//const_cast : 지정을 일시 해제함 (그냥알아만두자)

		double d = 10.5;
		int a = static_cast<int>(d);
		//  int a = d;  // 이런식으로도 쓸 수 있지만 나중에는 위에처럼 쓸일이 있다?

	}
}
*/