#include <stdio.h>
#include "bitset.c"

int main () {
	
	BitSet set, set1, set2, result;
	
	initialize(set);
	
	add(set, 5);
	
	printf("Set:\n");
	display(set);
	
	if(isEmpty(set)) {
		printf("Empty\n");
	} else {
		printf("Not Empty\n");
	}
	
	printf("Count (1): %d\n", cardinality(set));
	
	initialize(set1);
	initialize(set2);
	add(set1, 5);
	add(set1, 4);
	add(set1, 1);
	
	add(set2, 3);
	add(set2, 1);
	add(set2, 9);
	
	printf("\nSet 1:\n");
	display(set1);
	printf("\nSet 2:\n");
	display(set2);
	printf("\n");
	
	printf("Union of Set 1 and Set 2:\n");
	getUnion(result, set1, set2);
	display(result);
	
	printf("Intersection of Set 1 and Set 2:\n");
	intersection(result, set1, set2);
	display(result);
	
	printf("Difference of Set 1 and Set 2:\n");
	difference(result, set1, set2);
	display(result);
	
	if(isSubset(set1, set2)) {
		printf("Set 1 and Set 2 are subsets.\n");
	} else {
		printf("Set 1 and Set 2 are not subsets.\n");
	}
	
	if(areDisjoint(set1, set2)) {
		printf("Set 1 and Set 2 are disjoint sets.\n");
	} else {
		printf("Set 1 and Set 2 are not disjoint sets.\n");
	}

	if (areEqual(set1, set2)) {
		printf("Set 1 and Set 2 are equal.\n");
	} else {
		printf("Set 1 and Set 2 aren't equal.\n");
	}
	
	
	return 0;
}

/*int main () {
	
	IntArray myArray;
	
	int val = 5;
	initializeArray(myArray, val);
	
	printf("Array Contents:\n");
	printArray(myArray);
	
	return 0;
}*/
