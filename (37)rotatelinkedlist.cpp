/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
      Node* temp=head;
     // Write your code here.
     if(k==0||head==0||head->next==0)
     return head;
     int cnt=1;
     while(temp->next!=0)
     {
          temp=temp->next;
          ++cnt;
     }
     temp->next=head;
     temp=head;
      k=k%cnt;
      k=cnt-k-1;
      while(k--)
      {
        temp=temp->next;
      }
      head=temp->next;
      temp->next=0;
      return head;

}