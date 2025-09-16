#pragma once

#include <fstream>
#include <iostream>

struct Node {
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = nullptr;
	}
	Node(int _data, Node* _next = nullptr)
	{
		data = _data;
		next = _next;
	}
	
};

void AddToHead(Node*& head, int _data);
void AddAfterElem(Node* head, int Elem, int _data);
void AddAfterElem(Node* ptr, int _data);
void AddBeforeElem(Node*& head, int Elem, int _data);
void Show(Node* head);
void Remove(Node*& head);
void RemoveAfterElem(Node* p);
void RemoveAfterElem(Node* head, int elem);
void RomoveAllOccurrences(Node*& head, int _data);

void CreateLikeStack(Node*& head, std::istream& file = std::cin);
void CreateLikeQueue(Node*& head, std::istream& file = std::cin);