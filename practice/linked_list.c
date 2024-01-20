#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
int data;
struct node* next;
}node;
void create(int data,node* ptr){
    node* d;
    d=(node *)malloc(sizeof(node));
    d->data=data;
    d->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=d;
}
void printlist(node* ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
node* insert(int pos,int data,node* ptr){
    int i=1;
    node* head;
    node* prev;
    head=ptr;
    prev=ptr;
    node* d;
    d=(node *)malloc(sizeof(node));
    d->data=data;
    d->next=NULL;
    int flag=0;
    while(ptr!=NULL){
        if(i==pos && ptr!=head){
            prev->next=d;
            d->next=ptr;
            flag=1;
        }
        if(i==pos && ptr==head){
            head=d;
            head->next=prev;
            flag=1;
        }
        prev=ptr;
        ptr=ptr->next;
        i++;
    }
    if(flag==0){
        create(data,head);
    }
    
    return head;
}
node* delete(int n,node* ptr){
    node* head;
    node* prev;
    head=ptr;
    prev=ptr;
    while(ptr!=NULL){
        if(ptr->data==n){
            if(ptr!=head){
                prev->next=ptr->next;
                ptr->next=NULL;
                free(ptr);
                break;
            }
            else{
                head=head->next;
                prev->next=NULL;
                free(prev);
                break;

            }
        }
        prev=ptr;
            ptr=ptr->next;
    }
    return head;
}
int main(){
    node* head;
    head=(node *)malloc(sizeof(node));
    head->next=NULL;
    scanf("%d",&head->data);
    char str[20];
    scanf("%s",str);
    while(strcmp(str,"-1")!=0){
    if(strcmp(str,"add")==0){
        int a;
        scanf("%d",&a);
        create(a,head);
    }
    if(strcmp(str,"delete")==0){
        int p;
        scanf("%d",&p);
        head=delete(p,head);
    }
    if(strcmp(str,"insert")==0){
        int p;
        scanf("%d",&p);
        int d;
        scanf("%d",&d);
        head=insert(p,d,head);
    }
    char s[20];
    scanf("%s",s);
    strcpy(str,s);
    }
    printlist(head);
    return 0;
}