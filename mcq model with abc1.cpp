#include<iostream>
using namespace std;
int main()
{  
   char ans[3]={'a','b','c'};

	
	cout<<"who is the father of our nation ?\n"
	    <<"a)Gandhi\n"
	    <<"b)Nehru\n"
	    <<"c)Patel\n";
    cin>>ans;
	cout<<"entered answer:"<<ans<<endl;
	
	if(ans[0]){
		cout<<"Correct\n"<<"Well done";
	}
	if(ans[1]){
		cout<<"wrong"<<"better luck next time";
	}
	if(ans[2]){
			cout<<"wrong"<<"better luck next time";
	}
	return 0;
}
