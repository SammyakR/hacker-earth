#include<iostream>
#include<algorithm>

using namespace std;

long long minimum(short int a,short int b,short int c,long long k){
	long long x = 10000000000;

	if(k<=c){return 0;}
	long long h = k-c;
	long long l = 0;
	while(l<=h){
		long long m =(l+h)/2;
		if((a*m*m)+(b*m) > (k-c)){
			x = min(x,m);
			h = m-1;
		}
		else if((a*m*m) + (b*m) < (k-c)){
			l = m + 1;
		}
		else{return m;}
	}

	return x;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		short int a,b,c;
		long long k;
		cin>>a>>b>>c>>k;
		cout<<minimum(a,b,c,k)<<"\n";
	}
}
