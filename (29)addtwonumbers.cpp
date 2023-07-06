/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node *ans=new Node();
    Node *temp=ans;
    int carry=0;
    while(num1!=0||num2!=0||carry)
    {
        int sum=0;
        if(num1!=0)
        {
            sum+=num1->data;
            num1=num1->next;
        }
        if(num2!=0)
        {
            sum+=num2->data;
            num2=num2->next;
        }
        if(carry!=0)
        sum+=carry;
        carry=sum/10;
        Node *node=new Node(sum%10);
        temp->next=node;
        temp=node;
    }
    return ans->next;
}
