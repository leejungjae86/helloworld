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
			cout << "A is ?";   // ����Ʈ ���
			cin >> a;           // �Է�
			cout << "B is ?";
			cin >> b;
			cout << "A + B ?";

			cout << "16����(A+B) = " << hex << uppercase << a + b << nouppercase << endl;  // uppercase = �빮�ڷ����
			
		}
		*/
		// A is ?
		// B is ?
		// 2���� ���� �޴´�. (A+B ) �� 0���� ũ�� true ������ false
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
			* ���� �ϰ� Ʋ������ ��°��� ������
			int A, B = {0};
			bool result = false;
			cout << "A is ?";
			cin >> a;
			cout << "B is ?";
			cin >> b;
			-> cout << " result = " (A - B > 0 ) ? true  : false << boolalpha << result << noboolalpha << endl;

			*/

			// A is ?  B is ? C is ?
			// ���� ���� 3���� ���� �޴´�. A+B �� C ���� ũ�� A+B ���� ��� C �� A+B ���� ũ�� C ���� ���
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

			// a= 2���� : 10101010  b= 8���� : 111  c= 16����  : ff  a+b-c �� ����Ͻÿ�
			/*
			int a = 0b10101010;
			int b = 0111;
			int c = 0xff;

			cout << dec << a + b - c << endl;  // dec << 10������ ǥ���ϰ������

			*/
			// ����ȭ�ǰ� Ȯ���� �������̱� ������ �ʱ�ȭ�� �ȳ־��൵ �ȴ�


			// A is  ? B is ? C is ?
			//  A�� B ���� ũ�� A �� C���� �۴� 
			// ���� �ΰ� ������ ���� ���̸� true �ϳ��� �����̶� �����̸� false
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