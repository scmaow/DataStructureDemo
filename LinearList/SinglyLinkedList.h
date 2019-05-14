/**
* 线性表的链式实现 -- 单链表(Singly Linked List)
*
* 05/12/2019
*/
#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#include <cstdio>

//单链表的存储结构
struct Node {
	int data;
	struct Node *next;
};
typedef struct Node Node;
typedef struct Node* LinkList;

                  /************************************
                    以下个函数处理的单链表均带有头结点
                  ************************************/

/**
 * 初始化单链表
 *
 * 
*/
int init_slink(LinkList *list);
				  
				  
/**
 * 获取元素
 * 
 * pos >= 1
*/
int get_ele_slink(LinkList list,int pos,int *e);

/**
 * 获取单链表长度
 *
 * 
*/
int length_slink(LinkList list);

/**
 * 打印链表
 *
 * 
*/
void print_slink(LinkList list);

/**
 * 第pos个位置之前插入元素e
 *
 * pos >= 1
*/
int insert_ele_slink(LinkList list, int pos, int e);

/**
 * 第pos个位置的元素删除
 *
 * pos >= 1
*/
int delete_ele_slink(LinkList list, int pos, int *e);

/**
 * 从表尾到表头逆向建立单链表
 *
 * n >= 0
*/
int create_reverse_slink(LinkList *list, int n);


/**
* 建立正向单链表
*
* n >= 0
*/
int create_positive_slink(LinkList *list, int n);

#endif // !SINGLY_LINKED_LIST_H

