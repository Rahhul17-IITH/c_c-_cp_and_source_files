#include<iostream>
using namespace std;

int sample(int x,int y){
        if (x>y)
        return x;
        else
        return y;
        }

int main(){
    int p,q,r;
    scanf("p is %d and q is %d",&p,&q);
    r=sample(p,q);
    cout<<endl<<r;
    return 0;


}
