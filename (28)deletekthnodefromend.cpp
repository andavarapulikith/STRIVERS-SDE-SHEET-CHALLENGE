/*
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
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node *temp=head;
    for(int i=0;i<K-1;i++)
    temp=temp->next;
    Node *temp2=head;
    Node *temp1=head;
    if(temp->next==0)
    return head->next;
    while(temp->next!=0)
    {
        temp=temp->next;
        temp2=temp1;
        temp1=temp1->next;
    }
    // cout<<temp->data;
    // cout<<temp1->data;
    temp2->next=temp1->next;
    return head;
}
