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

bool detectCycle(Node *head)
{
	//	Write your code here
    if(head->next==0)
    return false;
    Node *slow=head;
    Node *fast=head;
    while(fast->next!=0 &&  fast->next->next != 0)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        return true;
    }
    return false;
}