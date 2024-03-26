#include <stdio.h>
#include <stdlib.h>
struct node
{
    int ID;
    struct node *next;
};
void node_in(int n);
void node_up();
struct node *head,*prt,*last;
int main(){
    head = (struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    last=head;
    for(int n=1;n<=3;n++){
        node_in(n);
    }
    printf("----\n");
    node_up();
    return 0;
}
void node_in(int n){
    prt=(struct node *)malloc(sizeof(struct node));
    prt->ID=n;
    prt->next=NULL;
    last->next=prt;
    last=prt;
    printf("p:%d\n",prt->ID);
}
void node_up(){
    struct node *current;
    current=head->next;
    while (current != NULL)
    {
        printf("p:%d\n",current->ID);
        current=current->next;
    }
}