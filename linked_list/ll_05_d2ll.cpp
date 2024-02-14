#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data ;
    Node* prev;
    Node* next;

    public:
    Node(int data1 , Node * prev1 , Node * next1){
        this->data = data1;
        this->prev= prev1;
        this->next= next1;
    }

    public:
    Node(int data1){
        this->data = data1;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

int main(){


    
}