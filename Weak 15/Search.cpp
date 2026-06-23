#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int checkIndex(Node *head, int x) {
    int index = 0;
    Node *current = head;
    while (current != NULL) {
        if (current->val == x) {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

void deleteList(Node *&head) {
    Node *newNode = head;
    while (newNode != NULL) {
        Node *nextNode = newNode->next;
        delete newNode;
        newNode = nextNode;
    }
    head = NULL;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Node *head = NULL,*tail = NULL;
        int val;
        
        while (true) {
            cin >> val;
            if (val == -1)
             break;
            insertAtTail(head, tail, val);
        }
        
        int x;
        cin >> x;

        cout << checkIndex(head, x) << endl;

        deleteList(head);
    }
    return 0;
}
