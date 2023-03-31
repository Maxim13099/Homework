#include <iostream>

using namespace std;

int binSearch(int* ar, int size, int el) {
	if (ar[size >> 1] == el) {
		return (size >> 1);
	}
	
	if (size == 1) {
		return -1;
	}

	if (el > ar[size >> 1]) {
		int bs = binSearch(&ar[size >> 1], size - (size >> 1), el);
		return bs + (size >> 1)*(bs != -1); 
	}

	if (ar[size >> 1] > el) {
		return binSearch(ar, size >> 1, el);
	}


	return -1;
}

int main()
{
    int size = 10;
    int el = 5;
    int ar[size] = {1,2,3,4,5,6,7,8,9,10};
    binSearch(ar, size, el);
    
}

