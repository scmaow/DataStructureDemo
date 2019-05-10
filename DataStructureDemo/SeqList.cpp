#include "SeqList.h"

int SeqList::init() {
	ele = static_cast<int *>(malloc(LIST_INIT_SIZE * sizeof(int)));
	if (!ele) return -1;

	len = 0;
	size = LIST_INIT_SIZE;

	return 0;
}

int SeqList::insert(int pos, int e) {
	if (pos <= 1 || pos >= len + 1) return -1;
	
	if (len >= size){
		int *newEle;
		newEle = static_cast<int *>(realloc(ele, (size + LIST_INCREMENT_SIZE) * sizeof(int)));
		if (!newEle)
			return -1;
		ele = newEle;
		size += LIST_INCREMENT_SIZE;
	}

	int *p = &ele[pos - 1];
	int *q = &ele[len - 1];

	for (; q >= p; q--) *(q + 1) = *q;

	*p = e;
	len++;

	return 0;
}


int SeqList::dele(int pos, int &e) {


}



