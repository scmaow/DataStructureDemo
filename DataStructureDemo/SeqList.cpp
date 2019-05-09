#include "SeqList.h"

int SeqList::init() {
	ele = static_cast<int *>(malloc(LIST_INIT_SIZE * sizeof(int)));
	if (!ele) return -1;

	len = 0;
	size = LIST_INIT_SIZE;

	return 0;
}



