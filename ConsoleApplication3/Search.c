#include <stdio.h>
#include "Search.h"
int search_idx(const int a[], int n, int key, int idx[]) {

	int counter = 0;
	int i;
	int j = 0;
	for (i = 0; i < n; i++) {
		while (a[i] == key) {

			idx[j++] = i + 1;
			counter++;
			break;
		}

	}

	return counter > 0 ? counter : -1;
}