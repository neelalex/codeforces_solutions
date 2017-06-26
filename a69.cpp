#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,valx,valy,valz;
	cin>>n;
	int x=0,y=0,z=0;
	while(n--){
		cin>>valx>>valy>>valz;
		x+=valx;
		y+=valy;
		z+=valz;
	}
	if(x==0 && y==0 && z==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
}