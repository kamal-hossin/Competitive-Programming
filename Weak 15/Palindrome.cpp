#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node* reverse(Node* head) {
    Node* temp = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (temp != NULL) {
        next = temp->next;
        temp->next = prev;
        temp->prev = next;  
        prev = temp;
        temp = next;
    }

    return prev;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }

    Node* slow = head;
    Node* fast = head;

     
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf = reverse(slow);

   
    Node* firstHalf = head;
    while (secondHalf != NULL) {
        if (firstHalf->val != secondHalf->val) {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int n;
    cin >> n;
    while (n != -1) {
        insertAtTail(head, tail, n);
        cin >> n;
    }

  if(isPalindrome(head))
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

    return 0;
}
