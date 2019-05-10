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
	if (pos < 1 || pos > len) return -1;

	int *p = &ele[pos - 1];
	int *q = &ele[len - 1];

	e = *p;

	for (; p < q; p++) *p = *(p + 1);

	len--;

	return 0;
}

void SeqList::destroy() {
	free(ele);
	ele = nullptr;
	len = 0;
	size = 0;
}

void SeqList::clear() {
	len = 0;
}

bool SeqList::empty() {
	return len == 0 ? true : false;
}

int SeqList::length() {
	return len;
}

int SeqList::get(int pos, int &e) {
	if (pos < 1 || pos > len) 
		return -1;
	else 
		e = ele[pos - 1];
	return 0;
}

int SeqList::prior(int e, int &pre) {
	if (e != ele[0]) {
		int i = 1;
		while (i < len && e != ele[i]) i++;

		if (i < len) {
			pre = ele[i - 1];
			return 0;
		}
	}
	return -1;
}

int SeqList::next(int e, int &next) {
	int i = 0;
	while (i < len - 1 && e != ele[i]) i++;

	if (i < len - 1) {
		next = ele[i + 1];
		return 0;
	}

	return -1;
}

int SeqList::locate(int e, bool(*compare)(int, int)) {
	int i = 1;
	while (i <= len && !compare(e, ele[i - 1])) i++;

	if (i <= len) return i;

	return 0;
}

void SeqList::traverse(void(*visit)(int)) {
	for (int i = 0; i < len; ++i) visit(ele[i]);
}