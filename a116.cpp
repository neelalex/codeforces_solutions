#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,large=0,a,b,sum=0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		sum-=a;
		sum+=b;
		if(sum>large)
			large=sum;
	}
	cout<<large;
return 0;
}