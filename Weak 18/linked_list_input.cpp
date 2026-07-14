#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void inseart_at_tail(Node *&head, int val)
{
    Node*newnode=new Node(val);
     while (temp->next != NULL)
    {
        temp = temp->next;
    }
    tail->next=tail;
}
void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    inseart_at_tail(head,tail, 100);
    print_link_list(head);

    return 0;
}