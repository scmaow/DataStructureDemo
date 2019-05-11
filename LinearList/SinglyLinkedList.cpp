#include "SinglyLinkedList.h"
#include <cstdlib>

int get_ele_slink(LinkList list, int pos, int *e) {
	LinkList p = list->next;
	int j = 1;

	while (p && j < pos) {
		p = p->next;
		j++;
	}

	if (!p || j > pos) return -1;

	*e = p->data;

	return 0;
}

int insert_ele_slink(LinkList list, int pos, int e) {
	LinkList p = list;
	int j = 0;

	while (p&&j < pos - 1) {
		p = p->next;
		j++;
	}

	if (!p || j > pos - 1) return -1;

	Node *node = (Node *)malloc(sizeof(Node));
	node->data = e;
	node->next = p->next;

	p->next = node;

	return 0;
}
