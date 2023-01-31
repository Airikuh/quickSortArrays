//Program That Uses Quick Sort To Sort Different Arrays
#include <iostream>
#include <string>

using namespace std;

//Compare Function to Compare Values in Arrays For QSORT()
int compare(const void* x,const void* y) {
	//Cast Pointer Types To Be Used in Comparisions
	const int* a = (int*)x;
	const int* b = (int*)y;

	//If Statement Return Positive to QSORT() if a > b
	if (*a > * b)
		return 1;
	//Else If Statement Return Negative to QSORT() if a < b
	else if (*a < *b)
		return -1;

	//Otherwise Elements Are Equal, Return 0 to QSORT()
	return 0;

	

}

//Compare Function For Char Variables in QSORT() so First Element in  
//Sorted Array is At Correct Location
int compareChar(const void* x, const void* y) {
	//Cast Pointer Types To Be Used in Comparisions
	const char* a = (char*)x;
	const char* b = (char*)y;

	//If Statement Return Positive to QSORT() if a > b
	if (*a > * b)
		return 1;
	//Else If Statement Return Negative to QSORT() if a < b
	else if (*a < *b)
		return -1;

	//Otherwise Elements Are Equal, Return 0 to QSORT()
	return 0;
}

int main() {
	//Declaration And Initialization of Unsorted Arrays
	int array1[] = { 3,4,2,1,7 };
	float array2[] = { 0.3,0.1,5.5,4.3,7.8 };
	char array3[] = { 'c','d','a','b','f' };
	
	//Variable Declaration to Hold Array Size Information
	int a, b, c;

	//Determine Size of Array1
	a = (sizeof(array1) / sizeof(*array1));
	//Sort List Using qsort()
	qsort(array1, a, sizeof(int), compare);

	cout << "Sorted Array array1: " << endl;
	//For Loop to Print Sorted Array to Screen
	for (int i = 0; i < a; i++) {
		cout << array1[i] << " ";
	}

	cout << endl;
	//Determine Size of Array2
	b = (sizeof(array2) / sizeof(*array2));

	qsort(array2, b, sizeof(float), compare);

	cout << "Sorted Array array2: " << endl;
	//For Loop to Print Sorted Array to Screen
	for (int i = 0; i < b; i++) {
		cout << array2[i] << " ";
	}

	cout << endl;

	//Determine Size of Array3
	c = (sizeof(array3) / sizeof(*array3));
	//Sort List Using qsort() With Different Compare Function
	qsort(array3, c, sizeof(char), compareChar);

	cout << "Sorted Array array3: " << endl;
	//For Loop to Print Sorted Array to Screen
	for (int i = 0; i < c; i++) {
		cout << array3[i] << " ";
	}



	return 0;
}
