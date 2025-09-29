#include "Lect.h"


int main() {

	Node* head1;

	initList(head1);
	Node* head2 = initList();

	// ������ ������� ������ head1
	print(head1);// �����: (������ �� �������, ��� ��� ������ ������)
	cout << '\n';



	bool is_empty_1, is_empty_2;
	is_empty_1 = isEmpty(head1);// true (1), ��� ��� head1 ������
	is_empty_2 = isEmpty(head2);// true (1), ��� ��� head2 ������
	cout << boolalpha << is_empty_1 << '\n';// �����: true
	cout << boolalpha << is_empty_2 << '\n';// �����: true
	

	// ��������� ������� 0 � ������ ������ head1
	addToHead(head1, 0);
	print(head1);// �����: 0 
	cout << '\n';

	// ��������� ������� 1 ����� ��������� �������� (������� �������� 0)
	addAfterNode(/*head1,*/ head1, 1);
	print(head1);// �����: 0 1 
	cout << '\n';

	// ������� �� ������ (������� 0)
	deleteFromHead(head1);
	print(head1); // �����: 1
	cout << '\n';

	// ��������� 2 ����� ��������� �������� (1)
	addAfterNode(/*head1,*/ head1, 2);
	print(head1);// �����: 1 2
	cout << '\n';

	// ������� ������� ����� head1 (������� 2)
	deleteAfterNode(head1);
	print(head1); // �����: 1
	cout << '\n';

	// ������� ������
	clear(head1);
	print(head1);// �����: (������)
	cout << '\n';

	is_empty_1 = isEmpty(head1);// true (1), ��� ��� head1 ������
	cout << boolalpha << is_empty_1 << '\n';// �����: true
	cout << '\n';

	addToHead(head1, 0);
	addAfterNode(head1, 1);
	addToTail(head1,2);
	print(head1);// �����:0 1 2



	return(0);
}