void count()
{
    int count=0;
    list *var=head;
    while(var != NULL){
        count++;
        var=var->next;
    }
    return;
}
