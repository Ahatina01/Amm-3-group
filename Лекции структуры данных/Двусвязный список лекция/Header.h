#pragma once
#include <iostream>
using std::cout;

struct Node {
	int data;
	Node* next;
	Node* prev;
};

void Show(Node* head);

void addToHead(Node*& head, Node*& tail, int elem);

void init(Node*& head, Node*& tail);

bool isEmpty(Node* head);

void addAfterNode(Node* pNode, Node*& tail, int elem);

void addBeforeNode(Node* pNode, Node*& head, Node*& tail, int elem);

void deleteCurrent(Node*& pNode, Node*& head, Node*& tail);

void clear(Node*& head, Node*& tail);
