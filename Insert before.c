void insert_before(int value)
{
    list *temp;
    temp=(list*)malloc(sizeof(list));
    temp->data=value;
    temp->next=head;
    head=temp;
}
