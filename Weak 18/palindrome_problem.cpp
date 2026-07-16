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
void palindrome (Node*head,Node tail)
{
   int flag=0;
   for(int Node* i=head->next;*j=tail;i++,j--){
     if(head==tail)
   {
     flag=1;
     return;

   }
   }
   if(flag==1)
   {
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
  
}

int main()
{
     Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
    

    return 0;
}