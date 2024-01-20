#include<stdio.h>
typedef enum rel_status{
    single,
    married,
    engaged,
    notMentioned,

}rel_status;
typedef struct person_details{
    char name[100];
    int age;
    rel_status Rel_status;
    struct person_details* friends[5];

}person;
typedef struct social_network{
    person members[100];
    int size;
}network;
void print_details(network l){
   int z= l.size;
for(int i=0;i<z;i++){
    print_person(l.members[i]);

}

}
void print_person(person p){
    char status[][15]={
        "single","married","engaged","notMentioned"
    };
    printf("%s\t%d\t%s\n",p.name,p.age,status[p.Rel_status]);
}
int main(){
    network list={
        .members={{"rohan",19,single},{"akmal",19,single},{"aktar",19,engaged},{"abc",5,single}},
        .size=4
    };
    print_details(list);
}