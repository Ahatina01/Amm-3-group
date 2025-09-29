#pragma once
#include<iostream>

using std::cout;
using std::boolalpha;

struct Node {
	int data;
	Node* next;
};


void initList(Node *& head);//Создание пустого списка
Node* initList();//Создание пустого списка второй способ

bool isEmpty(Node* head);//Проверка списка на пустоту 

void addToHead(Node*& head, int elem);//Добавление в начало списка

void addAfterNode(/*Node* head,*/ Node* pNode, int elem);//Добавление после заданного элемента (элемент задается указателем)

void deleteFromHead(Node*& head);//Удаление из головы(если список не пустой)

void deleteAfterNode( Node* pNode);//Удаление элемента после заданного

void clear(Node*& head);//Очистка Списка

void addToTail(Node* head, int elem);//Добавление в конец списка

void print(Node* head);//Печать списка
