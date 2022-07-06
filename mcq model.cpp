#include<iostream>
using namespace std;

int main()
{   int ans;
	cout<<"Who discovered the theory of relativity?\n"
	    <<"1)Albert einstien\n"
        <<"2)newton\n"
        <<"3)edison\n";
      cin>>ans;
	  cout<<"entered answer:"<<ans<<endl;
	  
	  switch(ans){
	  	case 1:
	    cout<<"correct\n"<<"WELL DONE!";
	    break;
	    
	    case 2:
	    cout<<"incorrect";
	    break;
	    
	    case 3:
	    cout<<"incorrect";
	    break;
		
		default:
		cout<<"not answered";	
	  }  
	  return 0;
        
}
