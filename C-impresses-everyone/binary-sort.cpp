#include <iostream>
#define sc(a) scanf("%lld",&a);

long long binary_search(long long& arr, int n,long long temp){
	long long low =0,high=n-1;
	

}

int main(){
	int n,q,temp;
	sc(n);
	long long arr[n];
	sc(arr[0]);
	for(int i;i<n;i++){
		sc(arr[i]);
		arr[i]+=arr[i-1];
	}
	sc(q);
	while(q--){
		sc(temp);
		temp = binary_search(arr,n,temp);
		if(temp%2==0){printf("A");}
		else{printf("B");}
	}
return 0;
}