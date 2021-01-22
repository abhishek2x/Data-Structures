// Largest Sum Contiguous Subarray
#include <bits/stdc++.h>
using namespace std;

int Kadane_Algo(int a[]){
    
    int max_so_far = 0;
    int max_ends_here = 0;

    for (int i = 0; i < 8; i++)
    {
        max_ends_here += a[i];
        if(max_so_far < max_ends_here){
            max_so_far = max_ends_here;
        }
        if(max_ends_here < 0){
            max_ends_here = 0;
        }
    }
    return max_so_far;
    
}


int main(){
    int arr[8];
    
    for (int i = 0; i < 8; i++){
        cin >> arr[i];
    }
    
    cout << Kadane_Algo(arr);    
    
    return 0;
}