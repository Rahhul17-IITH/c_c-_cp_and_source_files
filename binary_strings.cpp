#include<bits/stdc++.h>
using namespace std;

int sub_bit(int ar1[],int ar2[]){
int i,j;
for(int i=0;i<6;i++){
    for(int j=0;j<5;j++){

        if(ar1[i+j]==ar2[j]){
            if(j==4){
              return 1;
              }
              continue;
        }
        break;
    }


}
return 0;

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int arr1[10],arr2[5];
long long int num1,num2;
cin>>num1;
cin>>num2;
for(int a=0;a<10;a++){
        arr1[a]=num1%10;
        num1=num1/10;
}
for(int b=0;b<5;b++){
        arr2[b]=num2%10;
        num2=num2/10;
}

cout<<"\n";
int det=sub_bit(arr1,arr2);
cout<<det;
return 0;


}
