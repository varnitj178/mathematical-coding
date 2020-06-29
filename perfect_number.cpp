#include<iostream>
#include<cmath>
using namespace std;
void perfectNO(long n)
{

    if(n==1)
    {
        cout<< 0<<endl;
    }
    long sum=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            sum+=i+n/i;
        }
    }
    if(sum==n){
        cout<<1<<endl;   
    }else
    {
         cout<<0<<endl;
    }   
}

int main()
 {
    int test;
    cin>>test;
    while(test--)
    {
        long n;
        cin>>n;
        perfectNO(n);
    }
    return 0;
}
