 #include<bits/stdc++.h>
 using namespace std;

char check_winner(char s1[],int N){
    int a=0,d=0;
     for(int i=0;i<N;i++){
         if(s1[i]=='A'){
           a++;
         }
         else d++;
     }
 if(a>d){
     return 'a';
 }
else if(d>a){
    return 'd';
}
return 'f';

}


 int main(){
     int n;
     scanf("%d",&n);
     char s[n];
     scanf("%s",&s);
     char res=check_winner(s,n);
     if(res=='a'){
            cout<<"Anton";
     }
     else if(res=='d'){
            cout<<"Danik";
     }
     else{
            cout<<"Friendship";
     }
     return 0;
 }
