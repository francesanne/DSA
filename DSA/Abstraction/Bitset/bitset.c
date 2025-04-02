#include <stdio.h>
#include "bitset.h"

void initialize(BitSet set) {  //initialize to 0
	int i;
	for(i=0; i < size; i++) {
		set[i] = 0;
	}
}

void add(BitSet set, int elem) {  //set all values of specified elem to 1
	int i = 0;
	for(; i < size; i++) {
		set[elem] = 1;
	}
}

void display(BitSet set){    //print BitSet
	int i = 0;
	for(; i < size; i++) {
		printf("%d ", set[i]);
	}
	printf("\n");
}

int isEmpty(BitSet set) {
	int i;
	for (i=0; i < size; i++) {
		if(set[i] != 0) {
			return 0;
		}
	}
	return 1;
}

int cardinality (BitSet set) {
	int i = 0, count = 0;
	for (; i < size; i++) {
		if(set[i] != 0) {
			count++;
		}
	}
	return count;
}

void getUnion(BitSet result, BitSet set1, BitSet set2) {
	int i = 0;
	for (; i < size; i++) {
		result[i] = set1[i] || set2[i];
	}
}

void intersection(BitSet result, BitSet set1, BitSet set2) {
	int i = 0;
	for (; i < size; i++) {
		result[i] = set1[i] && set2[i];
	}
}

void difference(BitSet result, BitSet set1, BitSet set2) {
	int i = 0;
	for (; i < size; i++) {
		result[i] = set1[i] && !set2[i];
	}
}

int isSubset(BitSet set1, BitSet set2) {
	int i = 0;
	for (; i < size; i++) {
		if(set1[i] && !set2[i]) {
			return 0;
		}
	}
	return 1;
}

int areDisjoint(BitSet set1, BitSet set2) {
	int i = 0;
	for (; i < size; i++) {
		if(set1[i] && set2[i]) {
			return 0;
		}
	}
	return 1;
}

int areEqual(BitSet set1, BitSet set2) {
	int i = 0;
	for(; i < size; i++) {
		if(set1[i] != set2[i]) {
			return 0;
		}
	}
	return 1;
}



/*void initializeArray(IntArray arr, int value) {
	int i;
	for (i = 0; i < ARRAY_SIZE; i++) {
		arr[i] = value;
	}
}

void printArray(IntArray arr) {
	int i;
	for(i = 0; i < ARRAY_SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}*/
