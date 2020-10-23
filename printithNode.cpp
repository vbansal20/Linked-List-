void printinode(node* head, int i)
{
    node* temp = head;
    int count = 0;
    while (temp != NULL) 
    {
        if (count == i)
        {
            cout<<temp->data<<endl;
            return;
        }
        count++;
        temp = temp->next;
    }
    cout<<"Not present"; 
}
