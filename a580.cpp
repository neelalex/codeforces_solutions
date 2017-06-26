#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios::sync_with_stdio(false);
	ll n;
	cin>>n;
	vector<ll>arr(n),a(n);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	a[0]=1;
	for(int i=1;i<n;i++){
		if(arr[i]>=arr[i-1])
			a[i]=a[i-1]+1;
		else
			a[i]=1;
	}
	cout<<*max_element(a.begin(),a.end());

}