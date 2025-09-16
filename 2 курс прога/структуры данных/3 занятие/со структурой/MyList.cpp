#include "MyList.h"

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
			/*Node* new_p = new Node(_data);
			new_p->next = p->next;
			p->next = new_p;*/
			AddAfterElem(p, _data);
			break;
		}
		p = p->next;
	}

}


void AddAfterElem(Node* ptr, int _data)
{
	if (ptr)
	{
		/*Node* new_p = new Node(_data);
		new_p->next = ptr->next;
		ptr->next = new_p;*/

		ptr->next = new Node(_data, ptr->next);
	}

}

void AddBeforeElem(Node*& head, int Elem, int _data)
{
	if (head != nullptr) {

		if (head->data == Elem) {
			AddToHead(head, _data);
			return;
		}

		Node* p = head;

		while (p->next != nullptr) {

			if (p->next->data == Elem) {
				Node* new_p = new Node(_data);
				new_p->next = p->next;
				p->next = new_p;
				return;
			}

			p = p->next;
		}

	}

}

void RemoveAfterElem(Node* p) {
	if (p && p->next) {
		Node* ptrDel = p->next;
		p->next = p->next->next;
		delete ptrDel;
		ptrDel = nullptr;
	}
}
void RemoveAfterElem(Node* head, int elem)
{
	if (head)
	{
		Node* p = head;
		while (p->next)
		{
			if (p->data == elem)
			{
				RemoveAfterElem(p);
				break;
			}
			p = p->next;
		}
	}
}
void RomoveAllOccurrences(Node*& head, int _data)
{
	
	if (head != nullptr) {

		while(head->data == _data) {
			Remove(head);
			if (head == nullptr)
			{
				return;
			}
		}
		Node* p = head;
		while (p -> next != nullptr) 
		{
			if (p->next->data == _data)
			{
				RemoveAfterElem(p);
			}
			else {
				p = p->next;
			}
		}

	}

}

void CreateLikeStack(Node*& head, std::istream &file) {
	int elem;
	while (file >> elem) {
		AddToHead(head,elem);
	}
}

void CreateLikeQueue(Node*& head, std::istream& file)
{
	int data;
	file >> data;
	AddToHead(head, data);
	Node* tail = head;
	while (file >> data)
	{
		AddAfterElem(tail, data);
		tail = tail->next;
	}

}
