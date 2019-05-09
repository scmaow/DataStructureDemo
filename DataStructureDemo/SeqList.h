/**
 * ���Ա��˳��ʵ�� ˳���
 * 
 * 2019/05/10
*/
#ifndef SEQ_LIST
#define SEQ_LIST

#include <iostream>


#define LIST_INIT_SIZE 100
#define LIST_INCREMENT_SIZE 10

class SeqList {

	int *ele;     //�洢�ռ��ַ
	int len;      //��ǰ����
	int size;     //��ǰ����Ĵ洢����


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
	void get(int pos, int &ele);

	/**
	 * ����˳����е�һ����ele����compare()������Ԫ�ص�λ��
	 *
	*/
	void locate(int ele, int comapre());

	/**
	 * ����preEle��ǰ��Ԫ��
	 *
	*/
	void prior(int ele, int &preEle);

	/**
	 * ����nextEle�ĺ��Ԫ��
	 *
	*/
	void next(int ele, int &nextEle);

	/**
	 * ��ָ��λ�ò���Ԫ��
	 *
	*/
	void insert(int pos, int ele);

	/**
	 * ɾ��ָ��λ�õ�Ԫ��
	 *
	*/
	void dele(int pos, int &ele);

	/**
	 * ���ζ�˳����е�Ԫ�ص���vist()����
	 *
	*/
	void traverse(void vist());

};


#endif // !SEQ_LIST

