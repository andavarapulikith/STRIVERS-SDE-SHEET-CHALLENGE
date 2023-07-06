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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
   LinkedListNode<int>* prevnode=NULL;
   LinkedListNode<int>* currnode;
   LinkedListNode<int>* nextnode;
 
   nextnode=currnode=head;
   while(nextnode!=0)
   {
       nextnode=nextnode->next;
       currnode->next=prevnode;
       prevnode=currnode;
       currnode=nextnode;
   }
   head=prevnode;
   return head;
}