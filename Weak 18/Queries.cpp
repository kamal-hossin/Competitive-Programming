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

class LinkedList {
public:
    Node *head;
    Node *tail;

    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insert_head(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        print_list();
    }

    void insert_tail(int val) {
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        print_list();
    }

    void delete_at_index(int index) {
        if (head == NULL) return; 
        if (index == 0) { 
            Node *temp = head;
            head = head->next;
            delete temp;
            if (head == NULL) 
            tail = NULL; 

            print_list();
            return;
        }

        Node *temp = head;
        for (int i = 0; temp != NULL && i < index - 1; i++) {
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) 
        return;

        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        if (temp->next == NULL) tail = temp; 
        delete nodeToDelete;
        print_list();
    }

    void print_list() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int q;
    cin >> q;

    LinkedList list;

    while (q--) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            list.insert_head(V);
        } else if (X == 1) {
            list.insert_tail(V);
        } else if (X == 2) {
            list.delete_at_index(V);
        }
    }

    return 0;
}
