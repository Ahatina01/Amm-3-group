#pragma once

class Tstack
{
private:
	struct Node
	{
		char data;
		Node* next;
		Node(char _data) :data(_data), next(nullptr) {};
	};
	Node* top;
	// int size;
public:
	Tstack();
	Tstack(const Tstack& other);
	~Tstack();
	void push(char elem);
	void pop();
	char peak();
	bool isEmpty();
	void clear();
	Tstack& operator= (const Tstack& other);
};