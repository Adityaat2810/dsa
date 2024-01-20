#include<iostream>
using namespace std;

struct Node{
    int data ;
    Node * next;

    Node(int data1,Node *next1){
        this->data = data1;
        this->next= next1;

    }
};

int main(){

    Node* head = new Node(1,nullptr);
    Node* secNode = new Node(2,nullptr);
    head->next = secNode;


    cout<<head->data;
    return 0 ;

}
