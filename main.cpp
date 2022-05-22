#include "choice.h"

int main() {
    int n;
    cin >> n;
    int *arr=new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        cout << arr[i] << " ";
    };
    cout << endl;
    int sum;
    sum = ArrSum(arr, n);
    select(sum, arr)(arr, n);
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    delete []arr;
}
