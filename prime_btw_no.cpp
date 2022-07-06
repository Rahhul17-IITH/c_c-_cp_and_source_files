#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

bool testprime(int k){
   if(k<=1)return false;
   else if(k==2)return true;
   else if(k%2==0)return false;
   else{
    int div=3;
    int up_lim=sqrt(k)+1;
    while(div<=up_lim){
        if(k%div==0)return false;
       div=div+2;
    }
    return true;
   }
}



int main(){
int m,n,t;
scanf("%d",&t);
printf("\n");
bool d;
for(int i=0;i<t;i++){
        scanf("%d %d",&m,&n);
        printf("\n");
    for(int j=m;j<=n;j++){
          d=testprime(j);
     if(d==true)printf("%d\n",j);
                 }
        }
return 0;
}
