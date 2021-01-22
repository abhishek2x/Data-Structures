// Rotating an array by n

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    int n;
    int temp;

    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }

    cout << "/nOriginal array\n";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\t";
    }

    cout << "\nEnter number to rotate array\n";
    cin >> n;
    cout << arr[9];
    for (int i = 1; i <= n; i++)
    {
        temp = arr[9];
        for (int j = 1; j < 10; j++)
        {
            arr[10-j] = arr[10-j-1];
        }
        arr[0] = temp;
    }
    
    cout << "\nNew array\n";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";
    return 0;

}