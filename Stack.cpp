#include <bits/stdc++.h>

using namespace std;

/*class Node{
    public:
    int data;
    Node* next;
    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }
};

class Stack{
    Node* head;

    public:
    void push(int new_data){
        Node* newNode = new Node(new_data);
        if(!newNode){ cout<<"Stack OverFlow;;;;;";}

        newNode->next = head;
        head = newNode;
    }
};*/

class Stack{
    int  top, cap;
    int *a;

    public:
    Stack(int cap){
        this->cap = cap;
        top = -1;
        a = new int[cap];
    }

    ~Stack (){
        delete[] a;
    }
bool push(int x){
    if(top >= cap-1){cout<<"Stack OverFlow\n"; return false;}
    a[++top] = x;

    return true;
    }

    int pop() { 
        if (top < 0) { 
            cout << "Stack Underflow\n"; 
            return 0; 
        } 
        return a[top--]; 
    } 
     
    int peek() { 
        if (top < 0) { 
            cout << "Stack is Empty\n"; 
            return 0; 
        } 
        return a[top]; 
    } 

    bool isEmpty() { 
        return top < 0; 
    } 
};


int main(){
    Stack s(5); 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " popped from stack\n"; 

    cout << "Top element is: " << s.peek() << endl; 

    cout << "Elements present in stack: "; 
    while (!s.isEmpty()) { 
        cout << s.peek() << " "; 
        s.pop(); 
    } 

    return 0;
}