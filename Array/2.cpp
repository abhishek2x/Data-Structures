// Rotating an array by n in reverse order

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
        temp = arr[0];
        for (int j = 0; j < 9; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[9] = temp;
    }
    
    cout << "\nNew array\n";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";
    return 0;

}