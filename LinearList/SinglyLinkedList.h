/**
* ���Ա����ʽʵ�� -- ������(Singly Linked List)
*
* 05/12/2019
*/
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <cstdio>

//������Ĵ洢�ṹ
struct Node {
	int data;
	struct Node *next;
};
typedef struct Node Node;
typedef struct Node* LinkList;

                  /************************************
                    ���¸���������ĵ����������ͷ���
                  ************************************/

/**
 * ��ʼ��������
 *
 * 
*/
int init_slink(LinkList *list);
				  
				  
/**
 * ��ȡԪ��
 * 
 * pos >= 1
*/
int get_ele_slink(LinkList list,int pos,int *e);

/**
 * ��ȡ��������
 *
 * 
*/
int length_slink(LinkList list);

/**
 * ��ӡ����
 *
 * 
*/
void print_slink(LinkList list);

/**
 * ��pos��λ��֮ǰ����Ԫ��e
 *
 * pos >= 1
*/
int insert_ele_slink(LinkList list, int pos, int e);

/**
 * ��pos��λ�õ�Ԫ��ɾ��
 *
 * pos >= 1
*/
int delete_ele_slink(LinkList list, int pos, int *e);

/**
 * �ӱ�β����ͷ������������
 *
 * n >= 0
*/
int create_reverse_slink(LinkList *list, int n);


/**
* ������������
*
* n >= 0
*/
int create_positive_slink(LinkList *list, int n);

#endif // !SINGLY_LINKED_LIST_H

