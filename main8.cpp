/*
#include <iostream>

using namespace std;

int main()
{

	// 100 - 90 : A  , 90-80 : B , 80-70 : C ,  70-60 : D ,  60-50 : E , 점수는 : F
	
	int Score = { 0 };
	cin >> Score;

	Score /= 10;

	switch (Score)             // if 와 case 는 선택의 차이
	{
	case 10 :
		[[__fallthrough]];     // fallthrough 페이지 72쪽
	case 9 :
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
			break;
	case 7:
		cout << "C" << endl;
			break;
	case 6:
		cout << "D" << endl;
			break;
	case 5:
		cout << "E" << endl;
			break;
	default :
		cout << "F" << endl;


	}


	
	if (Score >= 90)
	{
		cout << "A" << endl;
	}
	else if (90 > Score && Score >= 80)
	{
		cout << "B" << endl;
	}
	else if (80 > Score && Score >=70)
	{
		cout << "C" << endl;
	}
	else if (70 > Score && Score >= 60)
	{
		cout << "D" << endl;
	}
	else if (60 > Score && Score >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}


	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;

	bool result = (a - b > 0);
	// cout << boolalpha << (a-b >0) << noboolalpha << endl;

	switch (result)
	{
	case true :
		cout << "true" << endl;
		break;
	default :
		cout << "false" << endl;
		break;
	}

	// 메인 7의 지문을 가지고와서 스위치로 바꿔보라
	// A+B 가 C보다 크면 A+B 값을 출력 , C가 A+B보다 크면 C값을 출력

	int a, b, c = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	cout << "C is ?";
	cin >> c;

	bool result = (a + b > c);
	switch (result) 
	{
	case true:
		cout << a + B << endl;
		break;
	default:
		cout << c << endl;
		break;
	}

// 숫자 하나를 입력 ? 1 이면 "red" 2면 "blue" 3이면 "black" 4 "white"


int a = { 0 };
cout << "숫자하나를 입력 ?" << endl;
cin >> a;

switch (a)
{
case 1 :
	cout << "Red" << endl;
	break;
case 2 :
	cout << "Blue" << endl;
	break;
case 3 :
	cout << "black" << endl;
	break;
case 4 :
	cout << "white" << endl;
	break;

} 

// 주민번호 뒤에 7자리를 입력? , 7자리 수 이고 맨앞에 번호가 1,3 이면 "남자" 출력
// 2, 4 이면 "여자" 출력 다른 숫자이면 "외계인" 출력

	int a = { 0 };
	cout << "주만번호 뒤에 7자리를 입력?" << endl;
	cin >> a;

	a /= 1000000;  // 위에서 주민번호 7자리이니까 

	switch (a)
	{
	case 1:
		[[__fallthrough]]
	case 3:
		cout << "남자" << endl;
		break;

	case 2:
		[[__fallthrough]]
	case 4:
		cout << "여자" << endl;
		break;
	default:
		cout << "외계인" << endl;
		break;

	}

} */
