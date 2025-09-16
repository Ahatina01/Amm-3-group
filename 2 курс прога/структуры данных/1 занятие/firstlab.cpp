// firstlab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "List.h"




int main()
{
  
	
	Node* head = nullptr;

	AddToHead(head, 6);

	AddToHead(head, 5);
	AddToHead(head, 4);
	AddToHead(head, 3); 
	AddToHead(head, 3);
	AddToHead(head, 2);
	AddBeforeElem(head, 2, 12);
	AddBeforeElem(head, 3, 15);
	AddBeforeElem(head, 6, 17);



	Show(head);


}
