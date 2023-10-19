#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE *next;

    public:
    NODE(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(NODE* &head, int data){

    NODE* node = new NODE(data);
    node->next = head;
    head = node;

}

void insertAtTail(NODE* &head, NODE* &tail, int data){

    NODE* node = new NODE(data);

    tail->next = node;
    tail = tail->next;
}

void printNode(NODE* &head){

    NODE* temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){

    // NODE* node1 = new NODE(10);
    // NODE* node2 = new NODE(20);

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // node1->next = node2;

    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // cout<<node2->data<<endl;
    // cout<<node2->next<<endl;


    // NODE* head = new NODE(10);

    // insertAtHead(head, 33);
    // insertAtHead(head, 20);
    // insertAtHead(head, 70);
    // printNode(head);

    NODE* head = new NODE(10);
    NODE* tail = head;

    insertAtTail(head, tail, 25);
    insertAtHead(head, 70);
    insertAtHead(head, 11);
    insertAtTail(head, tail, 30);
    printNode(head);


    return 0;
}