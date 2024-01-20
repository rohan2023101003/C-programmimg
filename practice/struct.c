#include<stdio.h>
struct students{
    int rollno;
    char name[100];
    float marks;

};
void main(){
    int n;
    scanf("%d",&n);
    struct students s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
    }
    

}
