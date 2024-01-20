#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data ;
     Node* next ;

    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convrtArrToLL(vector<int> &arr){

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i<arr.size(); i++){
        Node *temp= new Node(arr[i]);
        mover->next = temp ;

        mover = temp;

    }

    return head;



}

void linkedListTraversal(Node* head){
    Node * temp = head ;
    while(temp != nullptr){
        cout<<temp->data << " ";
        temp = temp->next;
    }

}

int lengthOfLinkedList(Node *head){
    Node* temp = head ;
    int count = 0 ;
    while(temp != nullptr){
        count = count+1;
        temp= temp->next;
    }

    return count ;
}

int checkIfPresent(Node *head, int value){
    Node* temp = head;
    while(temp){

        if(temp->data== value) return 1;
        temp = temp->next ;

    }
    return 0;
}

int main(){

    vector<int> arr = {2,3,5,76,7};
    Node *head = convrtArrToLL(arr);

    linkedListTraversal(head);
    cout<<lengthOfLinkedList(head)<<endl;

    cout<<checkIfPresent(head,57);

}