#include "List.h"

void List::AddByPointer(Node* ptr, Tinfo data)
{
	ptr->next = new Node(data, ptr->next);
	size++;
}
void List::DeleteByPointer(Node*& ptr)
{
	Node* delP = ptr;
	ptr = ptr->next;
	delete delP;
	delP = nullptr;
	size--;
}
void List::AddToHead(Tinfo data)
{
	AddByPointer(head, data);
	/*head->next = new Node(data, head->next);
	size++;*/
	if (head == tail)
	{
		tail = tail->next;
	}
}

void List::AddToTail(Tinfo data)
{
	AddByPointer(tail, data);
	/*tail->next = new Node(data, tail->next);
	size++;*/
	tail = tail->next;
}

void List::AddAfter(Node* ptr, Tinfo data)
{
	if (ptr)
	{
		AddByPointer(ptr, data);
		/*ptr->next = new Node(data, ptr->next);
		size++;*/
		if (ptr == tail)
		{
			tail = tail->next;
		}
	}
}

void List::DelAfter(Node* ptr)
{
	if (ptr && ptr->next)
	{

	}
}
