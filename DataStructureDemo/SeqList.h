/**
 * 线性表的顺序实现 顺序表
 * 
 * 2019/05/10
*/
#ifndef SEQ_LIST
#define SEQ_LIST

#include <iostream>


#define LIST_INIT_SIZE 100
#define LIST_INCREMENT_SIZE 10

class SeqList {

	int *ele;     //存储空间基址
	int len;      //当前长度
	int size;     //当前分配的存储容量


	/**
	 * 构造一个空的顺序表
	 * 0 成功，-1 失败
	*/
	int init();

	/**
	 * 销毁顺序表
	 * 
	*/
	void destroy();

	/**
	 * 重置顺序表为空
	 *
	*/
	void clear();

	/**
	 * 判断顺序表是否为空
	 *
	*/
	bool empty();

	/**
	 * 获取顺序表的长度
	 *
	*/
	int length();

	/**
	 * 返回顺序表中指定位置的元素
	 *
	*/
	void get(int pos, int &ele);

	/**
	 * 返回顺序表中第一个与ele满足compare()的数据元素的位序
	 *
	*/
	void locate(int ele, int comapre());

	/**
	 * 返回preEle的前驱元素
	 *
	*/
	void prior(int ele, int &preEle);

	/**
	 * 返回nextEle的后继元素
	 *
	*/
	void next(int ele, int &nextEle);

	/**
	 * 在指定位置插入元素
	 *
	*/
	void insert(int pos, int ele);

	/**
	 * 删除指定位置的元素
	 *
	*/
	void dele(int pos, int &ele);

	/**
	 * 依次对顺序表中的元素调用vist()函数
	 *
	*/
	void traverse(void vist());

};


#endif // !SEQ_LIST

