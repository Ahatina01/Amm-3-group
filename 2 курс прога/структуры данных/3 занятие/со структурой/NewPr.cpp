#include <iostream>
#include "MyList.h"


int main()
{
	Node* head = nullptr;

	//CreateLikeStack(head);

	std::ifstream in;
	in.open("Test.txt");
	if (in.is_open()) {
		CreateLikeQueue(head,in);
		in.close();
	}
	

	//AddToHead(head, 6);

	/*AddToHead(head, 5);
	AddToHead(head, 3);
	AddToHead(head, 5);
	AddToHead(head, 3);
	AddToHead(head, 5);
	AddBeforeElem(head, 5, 12);*/
	//AddBeforeElem(head, 5, 15);
	//AddBeforeElem(head, 5, 17);
	//RomoveAllOccurrences(head, 5);


	Show(head);


}