#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
};


void insert_at_tail(Node* &head, int val){
    Node* newnode= new Node(val);
    temp->next=head;
    while(temp.)
}

void print_link_list(Node* head){
    Node* temp=head;
    
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node* head=new Node(20);
    Node* a = new Node(30);
    Node* b = new Node(40);

    head->next=a;
    a->next=b;
    
    insert_at_head(head,10);
    print_link_list(head);
    
    


    return 0;
}