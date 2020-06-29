#include<iostream>
using namespace std;
int close(int n ,int m)
{
    if(n%m==0)
    {
        return n;
    }
    int up=n, down=n;
    while(1)
    {
        if(up%m==0&&down%m==0)
        {
            if(abs(up)<abs(down))
            {
                return down;
            }else{
                return up;
            }
        }else if (up%m==0)
        {
            return up;
        }else if(down%m==0){
            return down;
        }else{
            up++;
            down--;
        }
    }
}
int main()
 {
	int test;
	cin>>test;
	while(test--)
	{
	    int a,b;
	    cin>>a>>b;
	    int rem = a%b;
	    cout<<close(a,b)<<endl;
	    
	}
	return 0;
}
