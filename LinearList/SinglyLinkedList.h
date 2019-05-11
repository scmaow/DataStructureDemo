/**
* 线性表的链式实现 单链表 Singly Linked List
*
* 05/12/2019
*/
#pragma once
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <cstdio>

struct Node {
	int data;
	struct Node *next;
};
typedef struct Node Node;
typedef struct Node* LinkList;

int get_ele_slink(LinkList list,int pos,int *e);

int insert_ele_slink(LinkList list, int pos, int e);

#endif // !SINGLY_LINKED_LIST_H

