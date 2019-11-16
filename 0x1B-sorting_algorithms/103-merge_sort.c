#include "sort.h"
void TopDownMerge(int arrayA[],int iBegin,int iMiddle,int iEnd, int arrayB[])
{
	int i, j, k;
	i = iBegin, j = iMiddle;

	/* While there are elements in the left or right runs... */
	for (k = iBegin; k < iEnd; k++) {
		/* If left run head exists and is <= existing right run head. */
		if (i < iMiddle && (j >= iEnd || arrayA[i] <= arrayA[j])) {
			arrayB[k] = arrayB[i];
			i = i + 1;
		} else {
			arrayB[k] = arrayA[j];
			j = j + 1;
		}
	}
}
void TopDownSplitMerge(int arrayA[], int iBegin,int iEnd, int arrayB[])
{
	int iMiddle;
	if(iEnd - iBegin < 2)                       /* if run size == 1 */
		return;                                 /* consider it sorted */
	/* split the run longer than 1 item into halves */
	iMiddle = (iEnd + iBegin) / 2;              /* iMiddle = mid point */
	/* recursively sort both runs from array arrayA into arrayB */
	TopDownSplitMerge(arrayA, iBegin,  iMiddle, arrayB);  /* sort the left  run */
	TopDownSplitMerge(arrayA, iMiddle,    iEnd, arrayB);  /* sort the right run */
 	/* merge the resulting runs from arrayB into arrayA */
	TopDownMerge(arrayB, iBegin, iMiddle, iEnd, arrayA);

}
void CopyArray(int arrayA[], int  iBegin,int iEnd, int arrayB[])
{
	int k;
	for(k = iBegin; k < iEnd; k++)
		arrayB[k] = arrayA[k];
}

void TopDownMergeSort(int arrayA[], int arrayB[],int  n)
{
	 /* duplicate arrayA into arrayB */
	CopyArray(arrayA, 0, n, arrayB);
	TopDownSplitMerge(arrayA, 0, n , arrayB);   /* sort data from arrayB into arrayA */

}
void merge_sortArray(int i, int j, int a[], int aux[]) {
	if (j <= i) {
		return;     // the subsection is empty or a single element
	}
	int mid = (i + j) / 2;

	// left sub-array is a[i .. mid]
	// right sub-array is a[mid + 1 .. j]

	merge_sortArray(i, mid, a, aux);     // sort the left sub-array recursively
	merge_sortArray(mid + 1, j, a, aux);     // sort the right sub-array recursively

	int pointer_left = i;       // pointer_left points to the beginning of the left sub-array
	int pointer_right = mid + 1;        // pointer_right points to the beginning of the right sub-array
	int k;      // k is the loop counter

	// we loop from i to j to fill each element of the final merged array
	for (k = i; k <= j; k++) {
		if (pointer_left == mid + 1) {  // left pointer has reached the limit
			aux[k] = a[pointer_right];
			pointer_right++;
		} else if (pointer_right == j + 1) {        // right pointer has reached the limit
			aux[k] = a[pointer_left];
			pointer_left++;
		} else if (a[pointer_left] < a[pointer_right]) {        // pointer left points to smaller element
			aux[k] = a[pointer_left];
			pointer_left++;
		} else {        // pointer right points to smaller element
			aux[k] = a[pointer_right];
			pointer_right++;
		}
	}

	for (k = i; k <= j; k++) {      // copy the elements from aux[] to a[]
		a[k] = aux[k];
	}
}
void merge_sort(int *array, size_t size)
{
	int *work_array = malloc(size * sizeof(int));
	merge_sortArray(0, size - 1, array, work_array);
	/* TopDownMergeSort(array, work_array, size); */

}
