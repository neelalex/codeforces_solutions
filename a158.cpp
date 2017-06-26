#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,count=0,c=1;
	cin>>n>>m;
	vector<int>a;
	while(n--){
		cin>>x;
		a.push_back(x);
		}
	for(n=0;n<a.size();n++){
		if(a[n]>0&&a[n]>=a[m-1])
			count++;
		else 
			break;
		
	}
	cout<<count;
	return 0;
}
	