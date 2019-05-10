/**
 * 线性表的顺序实现 顺序表 Sequential List
 * 
 * 05/10/2019
*/
#ifndef SEQ_LIST
#define SEQ_LIST

#include <iostream>


#define LIST_INIT_SIZE 100       //顺序表存储空间初始分配量
#define LIST_INCREMENT_SIZE 10   //顺序表存储空间的分配增量

class SeqList {
public:
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
	 * true 空，false 非空
	*/
	bool empty();

	/**
	 * 获取顺序表的长度
	 *
	*/
	int length();

	/**
	 * 返回顺序表中指定位置的元素
	 * 0 成功，-1 失败
	*/
	int get(int pos, int &e);

	/**
	 * 返回顺序表中第一个与e满足compare()的数据元素的位序
	 * 
	*/
	int locate(int e, bool(*compare)(int, int));

	/**
	 * 返回e的前驱元素
	 *
	*/
	int prior(int e, int &pre);

	/**
	 * 返回e的后继元素
	 * 0 成功，-1 失败
	*/
	int next(int e, int &next);

	/**
	 * 在指定位置插入元素
	 * 0 成功，-1 失败
	*/
	int insert(int pos, int e);

	/**
	 * 删除指定位置的元素
	 * 0 成功，-1 失败
	*/
	int dele(int pos, int &e);

	/**
	 * 依次对顺序表中的元素调用visit()函数
	 *
	*/
	void traverse(void(*visit)(int));

	int *ele;     //存储空间基址
	int len;      //当前长度
	int size;     //当前分配的存储容量
};


#endif // !SEQ_LIST

