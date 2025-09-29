#pragma once
#include<iostream>

using std::cout;
using std::boolalpha;

struct Node {
	int data;
	Node* next;
};


void initList(Node *& head);//�������� ������� ������
Node* initList();//�������� ������� ������ ������ ������

bool isEmpty(Node* head);//�������� ������ �� ������� 

void addToHead(Node*& head, int elem);//���������� � ������ ������

void addAfterNode(/*Node* head,*/ Node* pNode, int elem);//���������� ����� ��������� �������� (������� �������� ����������)

void deleteFromHead(Node*& head);//�������� �� ������(���� ������ �� ������)

void deleteAfterNode( Node* pNode);//�������� �������� ����� ���������

void clear(Node*& head);//������� ������

void addToTail(Node* head, int elem);//���������� � ����� ������

void print(Node* head);//������ ������
