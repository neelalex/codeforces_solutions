#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double n,m,a;
	cin>>n>>m>>a;

	cout<<((long long int)ceil(n/a))*((long long int)ceil(m/a));
	return 0;
}