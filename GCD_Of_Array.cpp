#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
	
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--){
    	cout<<"Enter the size of array: ";
        int n;
        cin>>n;
        vector<int> v(n);
        int gcdArray=0;
        cout<<"Enter the array value";
        for(int i=0;i<n;i++){
            cin>>v[i];
            gcdArray=gcd(v[i],gcdArray);
        }
        cout<<gcdArray<<endl;
    }
}
