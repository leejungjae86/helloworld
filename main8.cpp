/*
#include <iostream>

using namespace std;

int main()
{

	// 100 - 90 : A  , 90-80 : B , 80-70 : C ,  70-60 : D ,  60-50 : E , ������ : F
	
	int Score = { 0 };
	cin >> Score;

	Score /= 10;

	switch (Score)             // if �� case �� ������ ����
	{
	case 10 :
		[[__fallthrough]];     // fallthrough ������ 72��
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

	// ���� 7�� ������ ������ͼ� ����ġ�� �ٲ㺸��
	// A+B �� C���� ũ�� A+B ���� ��� , C�� A+B���� ũ�� C���� ���

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

// ���� �ϳ��� �Է� ? 1 �̸� "red" 2�� "blue" 3�̸� "black" 4 "white"


int a = { 0 };
cout << "�����ϳ��� �Է� ?" << endl;
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

// �ֹι�ȣ �ڿ� 7�ڸ��� �Է�? , 7�ڸ� �� �̰� �Ǿտ� ��ȣ�� 1,3 �̸� "����" ���
// 2, 4 �̸� "����" ��� �ٸ� �����̸� "�ܰ���" ���

	int a = { 0 };
	cout << "�ָ���ȣ �ڿ� 7�ڸ��� �Է�?" << endl;
	cin >> a;

	a /= 1000000;  // ������ �ֹι�ȣ 7�ڸ��̴ϱ� 

	switch (a)
	{
	case 1:
		[[__fallthrough]]
	case 3:
		cout << "����" << endl;
		break;

	case 2:
		[[__fallthrough]]
	case 4:
		cout << "����" << endl;
		break;
	default:
		cout << "�ܰ���" << endl;
		break;

	}

} */
