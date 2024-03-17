
// อธิบายการทำงานของ  funtion นี้
void delete_node(char ch){
    node *current;
    node *prev;
    current=head;
    if(head->c==ch)
        head=head->next;
    else{
        while((current!=NULL)&&(current->c!ch)){
            prev=current;
            current=current->next;
        }
        if(current->c==ch){
            if(tail->c==ch)
                tail=prev;
            prev->next=current->next;
            current->next=NULL;
        }
    }
    if(current->c==ch)
        count--;
    else
        printf("%c is not in the list]n",ch);

    free(current);
}
    
    
    
    
    
    
    
    
