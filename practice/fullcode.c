#include<stdio.h>
#include<stdlib.h>
typedef struct person{
    char name[100];
    int age;

}person;
typedef struct node{
    person data;
    struct node* next;
}node;
typedef node* linkedlist;
void print_list(linkedlist head){
    linkedlist temp= head;
    while(temp!=NULL){
        printf("%s\t%d\t",temp->data.name,temp->data.age);
        temp=temp->next;
    }

}
person* append(linkedlist newnode,linkedlist tail){
    tail->next=newnode;
}
int main(){
    
   node  c={{"rohan",19},NULL};
   node b={{"alkmal",19},&c};
   node a={{"akatr",19},&b};
   linkedlist head=&a;
   linkedlist tail=&c;
   print_list(head);
   node new={{"rohna",18},NULL};
   linkedlist newnode=&new;
   append(newnode,tail) ;
   print_list(head);
}




