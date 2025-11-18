#include "Tstack.h"

Tstack::Tstack():top(nullptr) {};


Tstack::Tstack(const Tstack& other)
{
	if (other.top == nullptr)
	{
		top = nullptr;
	}
	else
	{
		Node* curOther = other.top;
		top = new Node(curOther->data);
		Node* cur = top;
		curOther = curOther->next;
		while (curOther!=nullptr)
		{
			cur->next = new Node(curOther->data);
			cur = cur->next;
			curOther = curOther->next;
		}
	}
}

Tstack& Tstack::operator=(const Tstack& other)
{
	if (this == &other)
	{
		return *this;
	}
	clear();
	if(other.top!=nullptr)
	{
		top = new Node(other.top->data);
		Node* cur = top;
		Node* otherCur = other.top->next;
		while (otherCur != nullptr)
		{
			cur->next = new Node(otherCur->data);
			cur = cur->next;
			otherCur = otherCur->next;
		}
	}
	return *this;
}

void Tstack::push(char elem)
{
	Node* p = new Node(elem);
	p->next = top;
	top = p;
}

void Tstack::pop()
{
	Node* pDel = top;
	top = top->next;
	pDel->next = nullptr;
	delete pDel;
	pDel = nullptr;
}

char Tstack::peak()
{
	if (top)//Добавление от автора
	{
		return top->data;
	}
}

bool Tstack::isEmpty()
{
	return top == nullptr;
}

void Tstack::clear()
{
	while (!isEmpty())
	{
		pop();
	}
}


Tstack::~Tstack()
{
	clear();

}
