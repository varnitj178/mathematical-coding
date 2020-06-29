#include<iostream>
using namespace std;
int main()
 {
	int test;
	cin>>test;
	while(test--)
    {
        int n;
        cin>>n;
        int rem = 0,sum=0;

        while(n>0)
        {   
        rem = n%10;
        sum = sum+rem;
        n=n/10;
        }
        int temp = sum;
        int  r,rev = 0;

        while(sum>0)
        {
        r = sum%10;
        rev = rev*10 + r;
        sum = sum/10;
        }
        if(temp == rev)
        {
        cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
