#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int len=a.size(),i,flag=1;
	
	if(a[0]==tolower(a[i])){
	for(i=1;i<len;i++){
		if(a[i]==toupper(a[i])){
			flag++;
		}

	}
	if(flag==len){
		transform(a.begin(),a.end(),a.begin(),::tolower);
		a[0]=toupper(a[0]);
		cout<<a;
		return 0;
	}

}

if(a[0]==toupper(a[i])){
	for(i=1;i<len;i++){
		if(a[i]==toupper(a[i])){
			flag++;
		}

	}
	if(flag==len){
		transform(a.begin(),a.end(),a.begin(),::tolower);
		//a[0]=toupper(a[0]);
		cout<<a;
		return 0;
	}
	
}
cout<<a;

}