#include <stdio.h>
#include <stdlib.h>
struct node
{
    int ID;
    struct node *next;
};
void node_in();
void node_up();
struct node *head,*prt1,*prt2,*prt3;
int main(){
    node_in();
    printf("-----\n");
    node_up();
    return 0;
}
void node_in(){
    head = (struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    prt1=(struct node *)malloc(sizeof(struct node));
    prt1->ID=1;
    head->next=prt1;
    printf("p:%d\n",prt1->ID);
    prt2=(struct node *)malloc(sizeof(struct node));
    prt2->ID=2;
    prt1->next=prt2;
    printf("p:%d\n",prt2->ID);
    prt3=(struct node *)malloc(sizeof(struct node));
    prt3->ID=3;
    prt2->next=prt3;
    printf("p:%d\n",prt3->ID);
    prt3->next=NULL;
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