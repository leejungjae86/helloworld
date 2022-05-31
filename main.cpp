/*
#include <iostream>

//----------[main은 프로그램의 시작점이다]----------//
int main(int argc, char* argv[]){

	int value1 = 0;               // 정수 (예: 1, -1) int 기본이 sigend  1 -1 (그러니까 int 만써도 sigend 와 같다?//
	int a1(0);
	int a2 = { 0 };               // 최신 초기화 표기법 //
	int a3{ 0 };                  // 최신 초기화 표기법 //

	value1 = 0b1001011;           // 0b = 2진법 표기법  //
	value1 = 0123;                // 0 붙이면 8진법 표기법  //
	value1 = 0x9f;                // 0x 16진법 제일 많이쓴다 //


	unsigned int value2;           // 양수값 정수 (예: 1,2,3 ) //
	float value3;                  // 3.141592f  실수 (소수점) //
	char c1 = 'B';                 // a 같은 문자  " <<따옴표는 문자하나 //
	c1 = '\101';                   // 10진수 유니코드 'A'  //
	c1 = '\x41';                   // 16진법 유니코드 'A'  //

	std::cin >> c1;

	//--------------[wontae : Hello World 출력]---------//
	std::cout << "hello, world!" << std::endl;

	std::cout << "There are" <<  value1  << "ways\n Love you" << std::endl;
	// \n 줄바꾸기  //
	std::cout << "ABCDEFG" <<  c1  << std::endl;
	std::cout << "안녕하세요?" << 123456789 << std::endl;



}
*/