#include <iostream>
#include "employeestruct.h"
using namespace std;


enum PieceType1 { 
	PieceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook = 10, 
	PieceTypePawn };
enum class PieceType : unsigned long { 
	King = 1, 
	Queen,
	Rook = 10,
	Pawn
};

int main() {

	PieceType1 myPiece = PieceTypeRook;
	PieceType myPiece2 = PieceType::King;
	//  int b = myPiece2;  // enum class�� Ÿ���� ������ �� ����.
	// ���� ���ڵ� ���� �� �� ä���

	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.LastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	// ���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee:" << anEmployee.firstInitial << anEmployee. LastInitial<< endl;


}