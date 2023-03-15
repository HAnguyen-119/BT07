#include <iostream>
using namespace std;
int binarySearch(int* arr, int* n, int* x)
{
    int left = 0, right = *n;
    while (left < right){
        int m = (left + right)/2;
        if (*(arr + m) < *x) left = m + 1;
        else right = m;
    }
    if (*(arr + left) == *x) return left;
    else return -1;
}
int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << binarySearch(arr, &n, &x);
    return 0;
}


