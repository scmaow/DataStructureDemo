/**
 * ���Ա��˳��ʵ�� ˳��� Sequential List
 * 
 * 05/10/2019
*/
#ifndef SEQ_LIST
#define SEQ_LIST

#include <iostream>


#define LIST_INIT_SIZE 100       //˳���洢�ռ��ʼ������
#define LIST_INCREMENT_SIZE 10   //˳���洢�ռ�ķ�������

class SeqList {
public:
	/**
	 * ����һ���յ�˳���
	 * 0 �ɹ���-1 ʧ��
	*/
	int init();

	/**
	 * ����˳���
	 * 
	*/
	void destroy();

	/**
	 * ����˳���Ϊ��
	 *
	*/
	void clear();

	/**
	 * �ж�˳����Ƿ�Ϊ��
	 * true �գ�false �ǿ�
	*/
	bool empty();

	/**
	 * ��ȡ˳���ĳ���
	 *
	*/
	int length();

	/**
	 * ����˳�����ָ��λ�õ�Ԫ��
	 * 0 �ɹ���-1 ʧ��
	*/
	int get(int pos, int &e);

	/**
	 * ����˳����е�һ����e����compare()������Ԫ�ص�λ��
	 * 
	*/
	int locate(int e, bool(*compare)(int, int));

	/**
	 * ����e��ǰ��Ԫ��
	 *
	*/
	int prior(int e, int &pre);

	/**
	 * ����e�ĺ��Ԫ��
	 * 0 �ɹ���-1 ʧ��
	*/
	int next(int e, int &next);

	/**
	 * ��ָ��λ�ò���Ԫ��
	 * 0 �ɹ���-1 ʧ��
	*/
	int insert(int pos, int e);

	/**
	 * ɾ��ָ��λ�õ�Ԫ��
	 * 0 �ɹ���-1 ʧ��
	*/
	int dele(int pos, int &e);

	/**
	 * ���ζ�˳����е�Ԫ�ص���visit()����
	 *
	*/
	void traverse(void(*visit)(int));

	int *ele;     //�洢�ռ��ַ
	int len;      //��ǰ����
	int size;     //��ǰ����Ĵ洢����
};


#endif // !SEQ_LIST

