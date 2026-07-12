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


#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int val;
    cin >> val;

    if (val == -1) {
        cout << "0" << endl;
        return 0;
    }

    int min_val = INT_MAX;
    int max_val = INT_MIN;

    while (val != -1) {
        min_val = min(min_val, val);
        max_val = max(max_val, val);
        cin >> val;
    }

    cout << max_val - min_val << endl;

   return 0;
}

   

