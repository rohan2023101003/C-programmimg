#include<stdio.h>
int LCM(int,int);
int GCD(int,int);
int LCM(int a,int b)
{
    int m,i=1,c=0;
    if(a>b){
        while(c<1){
            m=a*i;
            if(m%b==0){
                c=c+1;
            }
            i=i+1;   
        }
    }
    else{
        while(c<1){
            m=b*i;
            if(m%a==0){
                c=c+1;
            }
            i=i+1;
        }
    }
    return m;
}
int GCD(int a,int b)
{
  int c=0,i,g;
  
  if(a<b){
    i=a;
  }
  else{
    i=b;
  }
  if(a>1 && b>1 ){
    while(c!=1){
        if(a%i==0 && b%i==0){
            c=c+1;
            g=i;
        }
        i=i-1;
    }
  }
  else{
    g=1;
  }
  return g;    
}    
void main()
{
    int a,b,n,p=0,q,lcm,gcd;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
      for(b=1;b<=n;b++){
        lcm=LCM(a,b);
        gcd=GCD(a,b);
        if((lcm/gcd)<=3){
          p=p+1;
        }
      }
    }
    printf("%d",p);
}