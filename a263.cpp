#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=1,l,r=0,c=0,n=25,x;
	while(n--){
		cin>>x;
		if(x==1)
			l=count;
		count++;
	}
	r=l/5;
	if(!(l%5==0))
	r+=1;
	c=l%5;
	if(c==0)
		c=5;
	cout<<(abs(r-3)+abs(c-3));
	

}