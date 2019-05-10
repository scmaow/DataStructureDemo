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
	 *
	*/
	bool empty();

	/**
	 * ��ȡ˳���ĳ���
	 *
	*/
	int length();

	/**
	 * ����˳�����ָ��λ�õ�Ԫ��
	 *
	*/
	void get(int pos, int &e);

	/**
	 * ����˳����е�һ����ele����compare()������Ԫ�ص�λ��
	 *
	*/
	void locate(int ele, int comapre());

	/**
	 * ����preEle��ǰ��Ԫ��
	 *
	*/
	void prior(int ele, int &preE);

	/**
	 * ����nextEle�ĺ��Ԫ��
	 *
	*/
	void next(int ele, int &nextE);

	/**
	 * ��ָ��λ�ò���Ԫ��
	 *
	*/
	int insert(int pos, int e);

	/**
	 * ɾ��ָ��λ�õ�Ԫ��
	 *
	*/
	int dele(int pos, int &e);

	/**
	 * ���ζ�˳����е�Ԫ�ص���visit()����
	 *
	*/
	void traverse(void visit());

	int *ele;     //�洢�ռ��ַ
	int len;      //��ǰ����
	int size;     //��ǰ����Ĵ洢����
};


#endif // !SEQ_LIST

