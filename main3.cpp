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

	// ���� 5�� ���� //
	int	someInteger	 = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;   // 257
	someInteger *= 2;  //  514  (someinteger + someinteger)  // 2�� ���ؼ� �־��
	someShort = static_cast<short>(someInteger); // 514 
	someLong = someShort * 10000;   //  514 * 10000 = 5140000 
	someFloat = someLong + 0.785f;  //  5140000.758  float �� ǥ�����ɼ��� 7�ڸ� �����ڸ��³��ư� *8�ڸ�����
	someDouble = static_cast<double>(someFloat) / 100000;    // ������ 100000; // 51.40000758
	cout << someDouble << endl;

	int firstNum = 0;
	cout << "firstNum : ";   
	cin >> firstNum;        // cin �Է¹��� �� >> ���⿡ �ְڴ�
	int secondNum = 0;      
	cout << "secondNum : "; 
	cin >> secondNum ;      
	cout << "Sum : ";       
	cout << firstNum + secondNum << endl;  

	const int a = 0;  // const ����Ʈ�� ��� �ѹ� ���� ������ ������ �� ����
	constexpr int b = fac(4);   // ó�������� �Ҷ� �̸� ���� �����ٶ�?


}
*/