#include <iostream>
using namespace std;
int count_even(int* arr, int n)
{
    int even = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            even++;
        }
    }
    return even;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << count_even(arr, 5) << " " << count_even(arr + n - 5, 5);
    return 0;
}


