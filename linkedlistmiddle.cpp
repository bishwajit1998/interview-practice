#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
}
void printMiddle(struct Node *head)
{
	struct Node *slow = head;
	struct Node *fast = head;
    

    if(head !=NULL)
    {
    	while(fast!=NULL&&fast->next !=NULL)

    	{
    		fast = fast->next->next;
            slow = slow->next;
    	}
    	
    }

}


int main()
{
	sync_with_stdio(false);
	cin.tie(NULL);
   
    struct Node* head = NULL;
    int i;
    int n;
    cout1<<"enter the no of inputs";

    cin>>n;
    for(i =n;i>0;i--)
    {
    	push(&head,i);
    	printList(head);
    	printMiddle(head);
    }

  return 0;

}