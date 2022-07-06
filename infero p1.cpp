
#include<iostream>
using namespace std;

int even(long long p){
        if(p==1){
            cout<<1;

        }

          p=(even(p))/2;
          cout<<p<<" ";
}

int odd(long long q){
          q=3*q+1;
          q=even(q);
          cout<<q<<" ";
}



int main(){
  long long n,q;
  cin>>n;
  if((n/2)!=0){
    q=odd(n);
  }
  else if((n/2)==0){
    q=even(n);
  }

}

return 0;
