/*
#include <iostream>
#include <bitset>  // bitset �̶�� ��� �߰� <������ > �� ǥ��ȭ�Ѵٴ�..

using namespace ::std;

int main()
{
	{
		int a = 10;
		int b = 0;
		// b = a++;
		// b = ++a;
		// b = a--;
		b = --a;

		cout << "a = " << a << "b = " << b << endl;
	}

	{
		int a = 10;
		int b = -5;
		bool result = false;
		result = (a > b) ? true : false;    // true fales �� ���ڰ��� �������ִ�
		result = (a == b) ? true : false;   // å 73������ ����
		result = (a > 0 && b > 0) ? true : false;  
		result = (a > 0 || b > 0) ? true : false;  // || = or �ε�  \+ ����Ʈ 
		result = (a < 0 && --b > 0) ? true : false; //�߿� a�� 0���� �������� �������̱⿡ �ڿ� &&���Ĵ� ����ó����������
		result = !(a > 0) ? true : false;
		cout << "Reulst = " << boolalpha << result << noboolalpha << " b = " << b << endl;

		// boolalpha �� ���ڸ� ���ڷ� ǥ���ϰ������ ���� noboolalha

	}
	{
		int num = 10; 
		cout << "2���� ǥ�� : " << bitset<32>(num) << endl;
		cout << "8���� ǥ�� : " << dec << num << endl;
		cout << "10���� ǥ�� : " << oct << num << endl;
		cout << "16���� ǥ�� : " << hex << num << endl;

		// & = ��Ʈ ���� AND ����
		// | = ��Ʈ ���� or ���� ( ����Ʈ + \ )
		int x = 0x35;
		int y = 0xf0;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " y = " << bitset<8>(y) << endl;
		cout << " x & y = " << bitset<8>(x & y) << endl;  // AND
		cout << " x | y = " << bitset<8>(x | y) << endl;  // OR
		cout << " x ^ y = " << bitset<8>(x ^ y) << endl;  // XOR ��Ÿ�� ����
		cout << " ~x = " << bitset<8>(~x) << endl;

		int x1 = x << 2;
		cout << " x = " << bitset<8>(x) << endl;
		cout << " x1 = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << " cX = " << bitset<8>(cX) << endl;
		cX = cX >> 2;     // 2; �� ���⼭ 2�ܰ� �δ� ������ ��ȣȭ �Ҷ� , char (ĳ����?) 
		cout << " cX = " << bitset<8>(cX) << endl;

	}
	{
		// �� ��ȯ 
		// �Ʒ� ���δٸ� �������� �ϸ����ϰ� ����
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		// �ڷ��� �켱���� - �Ǽ� - ���������� ������ ����� ũ��, �Ǽ��� ���°� �켱
		// char -> int -> long -> float -> double -> long double  ���������� ������ ũ�� ũ�Ⱑ ū�� �켱����
		intVar = doubleVar + intVar * floatVar;
		//                   ����� 1�������� float
		//  doubleVar + (intVar * floatVar)
		//             double
		// inVar = ( double + (intVar * floatVar))
		//      int 

	}
	{
		// staatic_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ��
		// dynamic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		// reinterpret_cast : �����͸� �ٸ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ�� (�׳ɾ˾Ƹ�����)
		//const_cast : ������ �Ͻ� ������ (�׳ɾ˾Ƹ�����)

		double d = 10.5;
		int a = static_cast<int>(d);
		//  int a = d;  // �̷������ε� �� �� ������ ���߿��� ����ó�� ������ �ִ�?

	}
}
*/