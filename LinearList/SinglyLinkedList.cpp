#include "SinglyLinkedList.h"
#include <cstdlib>

int init_slink(LinkList *list) {
	*list = (Node *)malloc(sizeof(Node));
	if (!(*list)) return -1;

	(*list)->data = 0;
	(*list)->next = NULL;

	return 0;
}


int get_ele_slink(LinkList list, int pos, int *e) {
	Node *p = list->next;
	int j = 1;

	while (p && j < pos) {
		p = p->next;
		j++;
	}

	if (!p || j > pos) return -1;

	*e = p->data;

	return 0;
}

int length_slink(LinkList list) {
	Node *p = list->next;
	int j = 0;

	while (!p) {
		p = p->next;
		j++;
	}
	return j;
}

void print_slink(LinkList list) {
	Node *p = list->next;
	while (p) {
		printf("%-5d", p->data);
		p = p->next;
	}
	printf("\n");
}

int insert_ele_slink(LinkList list, int pos, int e) {

	Node *p = list;
	int j = 0;

	while (p && j < pos - 1) {  //找到直接前驱元素
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

int delete_ele_slink(LinkList list, int pos, int *e) {
	Node *p = list;
	int j = 0;

	while (p->next && j < pos - 1) {  //找到直接前驱元素
		p = p->next;
		j++;
	}

	if (!(p->next) || j > pos - 1) return -1;

	Node *node = p->next;
	p->next = node->next;
	*e = node->data;
	free(node);

	return 0;
}

int create_reverse_slink(LinkList *list, int n) {
	if (init_slink(list)) return -1;

	FILE *pf = fopen("SLinkListTestData.txt", "r");

	int tmp;
	for (int i = n; i > 0; i--) {
		if (fscanf(pf, "%d", &tmp) == 1) {
			Node *node = (Node *)malloc(sizeof(Node));
			node->data = tmp;
			node->next = (*list)->next;
			(*list)->next = node;
		}
	}
	fclose(pf);
	return 0;
}

int create_positive_slink(LinkList *list, int n) {
	if (init_slink(list)) return -1;

	Node *p = *list;

	FILE *pf = fopen("SLinkListTestData.txt", "r");

	int tmp;
	for (int i = n; i > 0; i--) {
		if (fscanf(pf, "%d", &tmp) == 1) {
			Node *node = (Node *)malloc(sizeof(Node));
			node->data = tmp;
			node->next = NULL;

			p->next = node;
			p = p->next;
		}
	}
	fclose(pf);
	return 0;
}
