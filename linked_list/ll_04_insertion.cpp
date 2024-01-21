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


Node *insetAtHead(Node* head,int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node *insertTail(Node *head, int value){
    if(head == NULL){
        return new Node(value);
    }
    Node * temp = head ;
    while(temp->next !=NULL){
        temp = temp-> next;
    }
    Node* newNode= new Node(value);
    temp->next = newNode;

    return head ;
}

Node * insertAtK(Node * head ,int element , int k){
    if(head ==NULL){
        if(k ==1) return new Node(element);
        else return NULL;
    }

    if(k ==1){
        Node *temp = new Node(element,head);
        return temp;
    }

    int counter =0;
    Node * temp = head ;
    while(temp != NULL){
        counter++;
        if(counter == k-1){
            Node *x = new Node(element);
            x->next = temp->next;
            temp->next = x;

            break;

        }
        temp = temp->next;
    }

    return head;

}

Node* insertBeforeValueX(Node *head,int element, int value){

     if(head ==NULL){
        return NULL;
    }

    if(head->data==value){
        return new Node(element,head);
    }

    Node * temp = head ;
    while(temp != NULL){
       
        if(temp->next->data == value){
            Node *x = new Node(element);
            x->next = temp->next;
            temp->next = x;

            break;

        }
        temp = temp->next;
    }

    return head;

}

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
}


int main(){

    vector<int> arr = {12, 5, 8,7};
    Node* head = convrtArrToLL(arr);

    head =insetAtHead(head ,80);
    print(head);

    head=insertTail(head,78);
    print(head);

    head = insertAtK(head,78,2);
    print(head);

    head = insertBeforeValueX(head,55,7);
    print(head);

}