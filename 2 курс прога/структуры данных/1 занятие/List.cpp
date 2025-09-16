#include "List.h"

void AddToHead(Node*& head, int _data)
{
	Node* p = new Node(_data);
	p->next = head;
	head = p;
}

void Show(Node* head)
{
	Node* p = head;
	
	while (p != nullptr)
	{
		std::cout << p->data << " ";
		p = p->next;
	}
	std::cout << std::endl;
}

void Remove(Node*& head)
{
	Node* p = head;
	head = head->next;
	delete p;
	p = nullptr;

}

void AddAfterElem(Node* head, int Elem, int _data)
{
	Node* p = head;

	while (p != nullptr)
	{
		if (p->data == Elem)
		{
			Node* new_p = new Node(_data);
			new_p->next = p->next;
			p->next = new_p;
			break;
		}

		p = p->next;
	}

}

void AddBeforeElem(Node* &head, int Elem, int _data)
{
	if (head != nullptr) {

		if (head->data == Elem) {
			AddToHead(head, _data);
			return;
		}

		Node* p = head;

		while (p->next != nullptr ) {

			if (p->next->data == Elem) {
				Node* new_p = new Node (_data);
				new_p->next = p->next;
				p->next = new_p;
				return;
			}

			p = p->next;
		}

	}

}