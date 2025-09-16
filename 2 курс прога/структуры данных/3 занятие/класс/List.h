#pragma once

#include <fstream>
#include <iostream>

using Tinfo = int;

struct Node {
	Tinfo data;
	Node* next;
	Node()
	{
		data = 0;
		next = nullptr;
	}
	Node(Tinfo _data, Node* _next = nullptr)
	{
		data = _data;
		next = _next;
	}
};

class List {
private:
	Node* head, * tail;
	int size;

	void AddByPointer(Node* ptr, Tinfo data);
	void DeleteByPointer(Node*& ptr);
public:
	List()
	{
		head = tail = nullptr;
		size = 0;
	}
	Node* getHead()
	{
		return head;
	}
	Node* getTail()
	{
		return tail;
	}
	int Size()
	{
		return size;
	}
	void AddToHead(Tinfo data);
	void AddToTail(Tinfo data);
	void AddAfter(Node* ptr, Tinfo data);
	void DelAfter(Node* ptr);
	void DelFromHead();
	void DelFromTail();
	void CreateLikeQueue(std::ifstream& file);
	void Print();
	void Sort();
};