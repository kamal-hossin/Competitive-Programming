#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *next;
        Node(int val) {
            this -> val = val;
            this -> next = NULL;
        }
};

void insert_at_tail(Node * &head, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_list(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}


int main() {
    Node * head = NULL;

    int val;
    cin >> val;
    while (val != -1) {
        insert_at_tail(head, val);
        cin >> val;
    }
    

    Node* i = head;
    while (i != NULL && i->next != NULL) {
        Node* j = i;
        while (j->next != NULL) {
            if (j->next->val == i->val) {
                Node* duplicate = j->next;
                j->next = j->next->next;
                delete duplicate;
            } else {
                j = j->next;
            }
        }
        i = i->next;
    }
    
    print_list(head);
    

 return 0;
}
