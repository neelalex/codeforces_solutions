#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios::sync_with_stdio(false);
	ll n,sum=0;
	cin>>n;
		if(n%2==0)
			sum=n/2;
		else
			sum=(n/2)-n;
	
	cout<<sum;
	return 0;
}