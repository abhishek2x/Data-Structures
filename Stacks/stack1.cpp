#include <bits/stdc++.h>
using namespace std;

class Stack{
    int top;
    public:
        int arr[100];
        Stack(){
            top = -1;
        }
        int pop();
        bool push(int n);
        int peek();
        bool isEmpty();
};

int Stack :: pop(){
    if(top == -1){
        cout << "Stack is Empty\n";
        return -22;
    }
    else return arr[top--];
}

bool Stack :: push(int x){
    if(top == 99){
        cout << "Stack is full";
        return false;
    }
    else{
        cout << x << " is pushed\n";
        arr[++top] = x;
        return true;
    }
}

int Stack :: peek(){
    return arr[top];
}

bool Stack :: isEmpty(){
    if(top == -1)return true;
    else return false;
}

int main(){

    class Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack\n"; 
    
    return 0;
}
