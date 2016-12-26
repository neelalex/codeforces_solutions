#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int i,j,n,x,count=0,sum=0;
	cin>>n;
	vector<long long int> a(5);
	for(i=0;i<n;i++){
		cin>>x;
		a[x]++;
	}
	count+=a[4];
	x=min(a[3],a[1]);
	count+=x;
	count+=a[3]-x;
	a[1]-=x;
	count+=a[2]/2;
	a[2]%=2;
	if(a[2]>0){
		count++;
		a[1]-=2;
	}
	if(a[1]>0){
		count+=a[1]/4;
		a[1]%=4;
		if(a[1]>0)
			count++;
	}
	cout<<count;
}

	/*for(i=0;i<n-1;i++){
		if(a[i]==4){
				count+=1;
				continue;
			}
			sum=0;
		for(j=i+1;j<n;j++){
			if(4-sum>0){
				sum+=a[j];
				a[j]=0;
			}
		

		}count++;
	}
	cout<<count;	
*/