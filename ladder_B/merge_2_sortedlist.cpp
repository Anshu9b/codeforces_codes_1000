
int merge_list( Node *head1, Node*head2)
{
    if(head1== NULL)
    return head2;
    else if( head2==NULL)
    return head1;
    Node *head= NULL, Node*tail=NULL;
    else if(  head1->val > head2->val)
{
    while(head1!= NULL && head2!= NULL)
    {
    if( head1->data <= head2->data)
    {
        tail->next=head1;
        tail= head1;
        head1= head1->next;
    
    }
    else 
    {
        tail->next =head2;
        tail= head2;
        head2=head2->next;
    }
    if(head1==NULL )
    tail->next= head2;
    else 
    tail->next = head1;
    return head;

    }
   // Node *temp1= new Node( head2->data);
   // Node  *temp2= new Node (head1->data);
    //head2->next= head1-> next;
    //head1->next= head2->next->next;
}


}