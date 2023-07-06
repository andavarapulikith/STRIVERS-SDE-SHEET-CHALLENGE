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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
     Node *temp1=firstHead;
     Node *temp2=secondHead;
     while(temp1!=temp2)
     {
         temp1=temp1->next==NULL?secondHead:temp1->next;
         temp2=temp2->next==NULL?firstHead:temp2->next;
     }
   
    return temp1;
}
