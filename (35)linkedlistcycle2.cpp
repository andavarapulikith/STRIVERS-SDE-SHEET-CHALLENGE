/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node *slow=head;
    Node *fast=head;
    // Node *temp=NULL:
    while(fast->next!=0 && fast->next->next!=0)
    {
        slow=slow->next;
        fast=fast->next->next;
        // cout<<"hello";
        if (slow == fast) {
            // cout<<slow->data;
          break;
        }
    }
    if (fast->next==0 || fast->next->next==0) 
    {
      return NULL;
    }
    if(slow==head)
    return head;
    fast=head;
    while(fast!=slow)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}