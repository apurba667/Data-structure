void delete_position(int position)
{
    list *var = head;
    list var2;
    if(position != 1){
            for(i=0;i<position-2;i++){
                var=var-next;
            }
            var2=var->next;
            var->next=var2->next;
    }
    else{
        head=var->next;
    }
}
