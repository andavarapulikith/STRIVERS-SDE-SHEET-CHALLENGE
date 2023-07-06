#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==0)
    return second;
    if(second==0)
    return first;
    Node<int> * temp=first;
    if(first->data>second->data)
    {
        temp=second;
        second=first;
        first=temp;
    }
    while(first!=0&&second!=0)
    {
        if(first->next==0)
        {
            first->next=second;
            break;
        }
      else if(first->data<second->data&&first->next->data<second->data)
      {
          first=first->next;

      }
      else if(first->next->data>=second->data)
      {
        //   cout<<"hello";
          Node<int>*temp1=second;
          second=second->next;
          temp1->next=first->next;
          first->next=temp1;
      }
     

    }

   
    
    return temp;
}
