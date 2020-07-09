#include<iostream>
using namespace std;
string anagram(string a ,string b)
{
    if(a.length()!=b.length())
    {
        return "NO";
    }
    int arr[26]={0};
    for(int i=0;i<a.length();i++)
    {
        arr[a[i]-97]++;
    }
    for(int j=0;j<b.length();j++)
    {
        arr[b[j]-97]--;
    }
    for(int k=0;k<26;k++)
    {
        if(arr[k]>0)
        {
            return "NO";
        }
    }
    return "YES";
    
}
int main()
 {
 	cout<<"Enter the number of test cases: ";
	int test;
	cin>>test;
	while(test--)
	{
		cout<<"Enter the two strings to check for anagram: ";
	    string a,b,res;
	    cin>>a>>b;
	    res=anagram(a,b);
	    cout<<res<<endl;
	}
	return 0;
}
