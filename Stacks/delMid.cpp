// Delete middle element of the stack
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;

    st.push(5);
    st.push(52);
    st.push(17);
    st.push(6);
    st.push(3);

    int midInd;

    if(st.size()%2 != 0){
        midInd = st.size()/2;
    }
    else midInd = st.size()/2 + 1;
    
}