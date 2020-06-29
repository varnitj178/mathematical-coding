	#include<iostream>
using namespace std;
int main()
 {
	int test;
	cin>>test;
	while(test--){
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[(i+n-d)%n];//clockwise rotation
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<arr[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
