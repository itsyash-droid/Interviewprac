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

class twoStack{
    int *arr;
    int size;
    int top1,top2;

    public:

    twoStack(int n){
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    bool isfull(){
        if(top1>=top2-1){
            cout<<"Stack Overflow!!!!"<<endl;
            return true;
        }
        else{
            return false;
        }
    }

    void push1(int data){
        if(!isfull()){
            top1++;
            arr[top1] = data;
        }
        else{return;}
    }

    void push2(int data){
        if(!isfull()){
            top2--;
            arr[top2] = data;
        }
        else{return;}
    }

    int pop1(){
        if(top1 == -1){
            cout<<"Stack is Empty!!!!!";
            return -1;
        }
        return arr[top1--];
    }

    int pop2(){
        if(top2 == size){
            cout<<"Stack is Empty!!!";
            return -1;
        }
        return arr[top2++];
    }

    ~twoStack() {
        delete[] arr;
    }
};

int main() {
    twoStack ts(5);

    ts.push1(10);
    ts.push2(20);
    ts.push1(30);
    ts.push2(40);
    ts.push1(50); 

    cout << "Popped from Stack 1: " << ts.pop1() << endl;  
    cout << "Popped from Stack 2: " << ts.pop2() << endl;  

    return 0;
}

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


/*int main(){
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
}*/

/*Beginner Level
Basic Stack Implementation:

Write a program to implement a stack using an array.

Write a program to implement a stack using a linked list.

Stack Operations:

Implement push(), pop(), peek(), isEmpty(), and isFull() functions for a stack.

Implement a function to get the minimum element from a stack in O(1) time.

Stack Applications:

Reverse a string using a stack.

Check if a given expression has balanced parentheses.

Evaluate a postfix expression using a stack.

Intermediate Level
Two Stacks in One Array:

Implement two stacks in a single array.

Special Stack Problems:

Implement a stack that supports getMin() in O(1) time and O(1) extra space.

Sort a stack using only another stack.

Implement an LRU (Least Recently Used) Cache using stacks.

Infix to Postfix & Prefix Conversion:

Convert an infix expression to postfix notation.

Convert an infix expression to prefix notation.

Next Greater/Smaller Element:

Find the next greater element for every element in an array using a stack.

Find the next smaller element for every element in an array.

Stock Span Problem:

Given daily stock prices, find the number of consecutive days where the price was less than or equal to today's price.

Largest Rectangle in Histogram:

Given an array representing histogram bar heights, find the area of the largest rectangle.

Advanced Level
Stack with O(1) Time Complexity for All Operations:

Implement a stack that supports push, pop, and getMin in O(1) time complexity without using extra space.

Design a Stack Using Queues:

Implement a stack using two queues.

Implement a queue using two stacks.

Celebrity Problem:

Given a matrix where M[i][j] = 1 means person i knows person j, find the celebrity (a person known by everyone but knows no one).

Trapping Rain Water Problem:

Given an array representing elevations, calculate how much water can be trapped.

Expression Evaluation:

Implement a calculator that evaluates infix expressions with +, -, *, /, and parentheses.

Redundant Brackets:

Check if an expression has unnecessary brackets using a stack.*/