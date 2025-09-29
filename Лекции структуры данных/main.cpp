#include "Lect.h"


int main() {

	Node* head1;

	initList(head1);
	Node* head2 = initList();

	// Печать пустого списка head1
	print(head1);// Вывод: (ничего не выведет, так как список пустой)
	cout << '\n';



	bool is_empty_1, is_empty_2;
	is_empty_1 = isEmpty(head1);// true (1), так как head1 пустой
	is_empty_2 = isEmpty(head2);// true (1), так как head2 пустой
	cout << boolalpha << is_empty_1 << '\n';// Вывод: true
	cout << boolalpha << is_empty_2 << '\n';// Вывод: true
	

	// Добавляем элемент 0 в начало списка head1
	addToHead(head1, 0);
	print(head1);// Вывод: 0 
	cout << '\n';

	// Добавляем элемент 1 после головного элемента (который содержит 0)
	addAfterNode(/*head1,*/ head1, 1);
	print(head1);// Вывод: 0 1 
	cout << '\n';

	// Удаляем из головы (удаляем 0)
	deleteFromHead(head1);
	print(head1); // Вывод: 1
	cout << '\n';

	// Добавляем 2 после головного элемента (1)
	addAfterNode(/*head1,*/ head1, 2);
	print(head1);// Вывод: 1 2
	cout << '\n';

	// Удаляем элемент после head1 (удаляем 2)
	deleteAfterNode(head1);
	print(head1); // Вывод: 1
	cout << '\n';

	// Очищаем список
	clear(head1);
	print(head1);// Вывод: (ничего)
	cout << '\n';

	is_empty_1 = isEmpty(head1);// true (1), так как head1 пустой
	cout << boolalpha << is_empty_1 << '\n';// Вывод: true
	cout << '\n';

	addToHead(head1, 0);
	addAfterNode(head1, 1);
	addToTail(head1,2);
	print(head1);// Вывод:0 1 2



	return(0);
}