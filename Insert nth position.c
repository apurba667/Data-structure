void nth_position(int value, int position)
{
    list *temp;
    list *var=head;
    int i;
    if(head == NULL){
        printf("There is no data");
    }
    else{
        temp=(list*)malloc(sizeof(list));
        temp->data=value;
        temp->next=NULL;
        if(position == 1){
            temp->next=head;
            head=temp;
        }
        else{
            for(i=0;i<position-2;i++){
                var=var->next;
                temp->next=var->next;
                var->next=temp;
            }
        }
    }
}
