//Implement Linear(sequential) search using a multi file program.

#include "p4_LS.h"

int linearSearch(int arr[], int size, int search) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            return i;  
        }
    }
    return -1;  
}