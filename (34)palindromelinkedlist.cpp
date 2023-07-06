#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==0 || head->next==0)
    return true;
    LinkedListNode<int>* slow=head;
    LinkedListNode<int> *fast=head;
    while(fast->next!=0 && fast->next->next!=0)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    LinkedListNode<int> *curr=slow->next;
    LinkedListNode<int> *nextnode=slow->next;
    LinkedListNode<int> *prev=0;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        curr->next=prev;
        prev=curr;
         curr=nextnode;
        
    }
//   slow->next=prev;
  slow=prev;
  LinkedListNode<int> *dummy=head;
  while(slow!=0)
  {
      if(slow->data!=dummy->data)
      return false;
      slow=slow->next;
      dummy=dummy->next;
  }
  return true;




}