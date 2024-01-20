#include<stdio.h>

struct student{
    int rollno;
    char name[100];
    float marks;
};
void main(){
  struct student s[2];
  for(int i=0;i<2;i++){
    scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
  }
  for(int i=0;i<2;i++){
    printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
  }
  struct student *ptr;
  ptr =&s[0];
  ptr=ptr+1;
  printf("%d\n",(*ptr).rollno);
  printf("%s\n",ptr->name);
  printf("%f\n",ptr->marks);
}
