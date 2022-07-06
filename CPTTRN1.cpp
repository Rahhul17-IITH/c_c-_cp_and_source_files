#include<bits/stdc++.h>
using namespace std;

void printrow(int j,int k){
  if(j%2==0){
    for(int l=1;l<=k;l++){
        if(l%2==0){
            cout<<"*";
        }
        else cout<<".";
    }
    }
    else{
  for(int n=1;n<=k;n++){
    if(n%2==0){
            cout<<".";
        }
        else cout<<"*";
    }
    }
  }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t,l,c;
cin>>t;
cout<<"\n";
for(int i=1;i<=t;i++){
    cin>>l>>c;
    cout<<"\n";
    for(int m=1;m<=l;m++){
        printrow(m,c);
        cout<<"\n";
    }

}
return 0;

}
