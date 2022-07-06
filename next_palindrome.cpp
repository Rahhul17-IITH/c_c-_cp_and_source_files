#include<bits/stdc++.h>
using namespace std;

int no_dig(long long int j){
    int k=0;
  while(j!=0){
     j=j/10;
     k++;
  }
return k;
}

void get_dig(long long int m,int arr[],int o){
    int n=0;
 while(m!=0){
    arr[o-n-1]=m%10;
    n++;
    m=m/10;
 }
}

void next_palindrome(int arr1[],int q){
      if(q%2==0){
        for(int r=0;r<((q/2)-1);r++){
         arr1[q-r-1]=arr1[r];
        }
        if(arr1[(q/2)-1]>arr1[(q/2)]){
          arr1[(q/2)]=arr1[(q/2)-1];
        }
        else if(arr1[(q/2)-1]<arr1[(q/2)]){
            arr1[(q/2)-1]=arr1[(q/2)-1]+1;
            arr1[(q/2)]=arr1[(q/2)-1];
        }
        else if(arr1[(q/2)-1]==arr1[(q/2)]){
            arr1[(q/2)-1]++;
            arr1[(q/2)]++;
        }
        }
      else{
        for(int s=0;s<(((q-1)/2)-1);s++){
            arr1[q-s-1]=arr1[s];
        }
        if(arr1[((q-1)/2)-1]>arr1[((q-1)/2)+1]){
           arr1[((q-1)/2)+1]=arr1[((q-1)/2)-1];

        }
       else if(arr1[((q-1)/2)-1]<arr1[((q-1)/2)+1]){
        arr1[((q-1)/2)+1]=arr1[((q-1)/2)-1];
        arr1[(q-1)/2]=arr1[(q-1)/2]+1;
       }
       else if(arr1[((q-1)/2)-1]==arr1[((q-1)/2)+1]){
         arr1[(q-1)/2]++;
       }

      }


}
void print_palindrome(int arr2[],int u){
     for(int v=0;v<u;v++){
        cout<<arr2[v];
     }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
long long int k;
int t,l;
cin>>t;
cout<<"\n";
for(int i=1;i<=t;i++){
    cin>>k;
    cout<<"\n";
    l=no_dig(k);
    int dig[l];
    get_dig(k,dig,l);
    next_palindrome(dig,l);
    print_palindrome(dig,l);
}
return 0;

}

