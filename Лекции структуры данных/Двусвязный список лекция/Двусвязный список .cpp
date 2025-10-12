#include "Header.h"

void Show(Node* head) 
{
	if (head == nullptr) 
	{
		return;// Проверка на пустоту
	}
	Node* cur = head;
	while (cur != nullptr) 
	{
		cout << cur->data << ' ';
		cur = cur->next;
	}
}

void addToHead(Node*& head, Node*& tail, int elem)
{
	Node* p = new Node;
	p->data = elem;
	p->prev = nullptr;
	p->next = head;

	if (head != nullptr)
		head->prev = p;
	else
		tail = p; // Если список был пуст

	head = p;
}

void init(Node *&head, Node*& tail)
{
	head = nullptr;
	tail = nullptr;
}

bool isEmpty(Node *head) 
{
	return head == nullptr;
}

void addAfterNode(Node *pNode,Node*&tail,int elem) 
{
	if (pNode == nullptr) 
	{
		return; // Проверка на nullptr
	}
	Node* p = new Node;
	p->data = elem;
	p->next = pNode->next;
	p->prev = pNode;
	pNode->next = p;
	if (pNode != tail) 
	{
		p->next->prev = p;
	}
	else
	{
		tail = p;
	}
}

void addBeforeNode(Node* pNode, Node*& head, Node*& tail, int elem)
{
	// Если передаем nullptr, создаем первый элемент
	if (pNode == nullptr)
	{
		// Создаем первый элемент
		addToHead(head, tail, elem);
		return;
	}

	Node* p = new Node;
	p->data = elem;
	p->prev = pNode->prev;
	p->next = pNode;
	pNode->prev = p;
	if (pNode != head) 
	{
		p->prev->next = p;
	}
	else
	{
		head = p;
	}
}

void deleteCurrent(Node*& pNode, Node*&head, Node*& tail)
{
	if (pNode != head) 
	{
		pNode->prev->next = pNode->next;
	}
	else 
	{
		head = pNode->next;
	}
	if (pNode != tail)
	{
		pNode->next->prev = pNode->prev;
	}
	else 
	{
		tail = pNode->prev;
	}
	pNode->next = nullptr;
	pNode->prev = nullptr;
	delete pNode;
	pNode = nullptr;
}

void clear(Node*& head, Node*& tail)
{
	while (!isEmpty(head)) 
	{
		deleteCurrent(head, head, tail);
	}
}