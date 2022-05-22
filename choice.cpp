#include "choice.h"

int ArrSum(int* arr, int n) {
    int s=0;
    for (int i=0; i<n; i++) {
        s += arr[i];
    };
    return s;
};

void ArrRes(int* arr, int n) {
    for (int i = 0, j = n - 1 ; i < j; ++i, --j) {
        int a = arr[i];
        arr[i] = arr[j];
        arr[j] = a;
    }
};

void ArrSortV(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
};
void ArrSortU(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] < arr[j + 1]) {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }
};
void (*select(int sum, int* arr)) (int* arr, int n) {
    void (*actions[]) (int* arr, int n) = { ArrRes, ArrSortV, ArrSortU };
    if (sum == arr[0]) {
        return actions[0];
    }
    if (sum > arr[0]) {
        return actions[1];
    }
    if (sum < arr[0]) {
        return actions[2];
    }
};