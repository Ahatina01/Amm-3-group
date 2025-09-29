#include "Lect.h"

//Первая лекция 8.09.25

//Создание пустого списка
void initList(Node *& head) 
{
	head = nullptr;
}

//Создание пустого списка второй способ
Node* initList() 
{
	return nullptr;
}

//Проверка списка на пустоту 
bool isEmpty(Node * head) 
{
	return head == nullptr;
}

//Добавление в начало списка
void addToHead(Node *& head,int elem) 
{
	Node* p = new Node;
	p->data = elem;
	p->next = head;
	head = p;
}

//Добавление после заданного элемента (элемент задается указателем)
void addAfterNode(/*Node *head,*/ Node* pNode, int elem)//по логике функции параметр head лишний
{
	if (pNode != nullptr)//Проверка на существование pNode (добавление от автора)
	{
		Node* p = new Node;
		p->data = elem;
		p->next = pNode->next;
		pNode->next = p;
	}
}

//Вторая лекция 15.09.25

//Удаление из головы(если список не пустой)
void deleteFromHead(Node*& head)
{
	if (!isEmpty(head)) {//проверка - от автора
		Node* pDel = head;
		head = head->next;
		//head->next = nullptr;
		delete pDel;
		pDel = nullptr;
	}
	
}

//Удаление элемента после заданного
void deleteAfterNode(Node*pNode) 
{
	Node* pDel = pNode->next;
	if (pDel&&pNode)//проверка с pNode от автора 
	{
		pNode->next = pDel->next;
		//pDel->next = nullptr;
		delete pDel;
		pDel = nullptr;
	}
}

//Очистка Списка
void clear(Node*&head) 
{
	while (!isEmpty(head)) 
	{
		deleteFromHead(head);
	}
}

//Добавление в конец списка
void addToTail(Node*head,int elem) 
{
	Node* cur = head;
	while(cur->next!=nullptr)
	{
		cur = cur->next;
	}
	addAfterNode(cur, elem);
}

void deleteLastElem(Node*& head) 
{

}

//Печать списка
void print(Node* head) 
{
	Node* cur = head;
	if (isEmpty(head)) //от автора
	{
		cout << "Nothing";
	}
	while (cur) //cur!=nullptr
	{
		cout << cur->data << ' ';
		cur = cur->next;
	}
}
