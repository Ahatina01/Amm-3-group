#pragma once

#include <iostream>

struct Node {
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = nullptr;
	}
	Node(int _data)
	{
		data = _data;
		next = nullptr;
	}
};

void AddToHead(Node*& head, int _data);
void AddAfterElem(Node* head, int Elem, int _data);
void AddBeforeElem(Node*& head, int Elem, int _data);

void Show(Node* head);

void Remove(Node*& head);