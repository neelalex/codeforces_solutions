#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,s=0,c=1;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	sum=floor(sum/2);
	for(auto it:a){
		s+=it;
		if(s>sum){
			cout<<c;
			return 0;
		}
		c++;
	}
}