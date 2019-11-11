void search(int value)
{
    list *var=head;
    while(var != NULL){
        if(var->data == value){
            printf("Found");
            break;
        }
        else{
            var=var->next;
        }
    }
    if (var->next == NULL){
        printf("Not found");
    }
}
