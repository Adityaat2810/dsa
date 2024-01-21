#include<bits/stdc++.h>
using namespace std ;


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

Node* removesHead(Node* head){
    if(head == NULL) return head;
    Node * temp = head ;
    head = head-> next;

    delete temp;
    return head;

}

Node* removesTails(Node * head){
    if(head == NULL || head-> next == NULL) return NULL;
    Node * temp= head;
    while(temp ->next-> next!= NULL ){
        temp= temp-> next;

    }

    free(temp->next);
    temp->next = nullptr;

    return head;

}

Node *removesFromKthposn(Node *head ,int k){
    if(head == NULL ) return head ;
    if(k ==1){
        Node* temp =head ;
        head = head->next;
        free(temp);
        return head ;
    }

    int counter =0 ;
    Node *temp = head ;
    Node* prev =NULL;

    while(temp != NULL){
        counter++ ;
        if(counter ==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev =temp ;
        temp= temp->next;
    }

    return head;


}



Node *removeParticularNode(Node *head ,int element){
    if(head == NULL ) return head ;
    if(head->data ==element){
        Node* temp =head ;
        head = head->next;
        free(temp);
        return head ;
    }

    Node *temp = head ;
    Node* prev =NULL;

    while(temp != NULL){
     
        if(temp->data ==element){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev =temp ;
        temp= temp->next;
    }

    return head;


}

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

void print(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;
}


int main(){

    vector<int> arr = {12, 5 ,8, 7};
    Node* head = convrtArrToLL(arr);

    head = removeParticularNode(head,7);


    print(head);

}
