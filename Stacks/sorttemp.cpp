// Sort a stack using temperay stack

#include <bits/stdc++.h>
using namespace std;

stack<int> st;
stack<int> temp;
// int k = 0;

void inserter(int n){
    if(temp.size() == 0){
        temp.push(n);
    }
    else{
        if(temp.top() > n){
            int k = temp.top();
            temp.top() = n;
            n = k;
            temp.push(n);
        }
        else{
            temp.push(n);
        }
    }
}

int main(){
    st.push(34); 
    st.push(3); 
    st.push(31); 
    st.push(98); 
    st.push(92); 
    st.push(23); 
    int sz = st.size();
        
    cout << "Original Stack----\n";

    while(!st.empty()){
        int ch = st.top();
        cout << ch << " ";
        st.pop();
    }

    while(!st.empty()){
        if(st.size() > 0){
            int ele = st.top();
            st.pop();
            inserter(ele);
        }
    }
    
    cout << "\nNew Stack----\n";
    while(!temp.empty()){
        cout << temp.top();
        temp.pop();
    }

}
// to be evaluated