// Reverse a Stack using recursion
#include <bits/stdc++.h>
using namespace std;

stack<char> st;

string ns;

char insertAtBottom(char x){
    if(st.size() == 0)
    st.push(x);
    else{
        char a = st.top();
        st.pop();
        insertAtBottom(x);
        st.push(a);
    }
}

char reverse(){
    if(st.size() > 0)
    {
        char ch = st.top();
        st.pop();
        reverse();
        insertAtBottom(ch);
    }
}

int main(){
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
      
    cout << "1 2 3 4" << endl;
    reverse();

    while(!st.empty()) 
    { 
        char p=st.top(); 
        st.pop(); 
        ns+=p; 
    } 
    cout<<ns[3]<<" "<<ns[2]<<" "<<ns[1]<<" "<<ns[0]<<endl; 
    
    return 0; 
}