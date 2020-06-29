#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    int a;
	    cin>>a;
	    bool flag =0;
	    int sqrta = int(sqrt(a));
	    for(int i=2;i<=sqrta;i++)
	    {
	        if(a%i==0)
	        {
	            flag=1;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
