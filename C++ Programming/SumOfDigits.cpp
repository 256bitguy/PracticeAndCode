#include <iostream>
//#include<math.h>
using namespace std;

int main() {
	// your code goes her
long long int t,n[1000];
	
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{
	    cin>>n[i];
	    
	}
	for(int j=1;j<=t;j++)
	{
	  int sum=0;
	  for(int k=1;k<8;k++)
	  {
	      sum+=n[j]%10;
	      n[j]=n[j]/10;
	      
	  }
	  cout<<sum<<"\n";
	}
	
	
	return 0;
}