#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,count=0,a,b,c,cc=0;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a==1)
			count++;
		if(b==1)
			count++;
		if(c==1)
			count++;
		if(count>=2)
			cc++;
		count=0;
		


	}
	cout<<cc;
}