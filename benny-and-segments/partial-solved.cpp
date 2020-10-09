#include<iostream>
#include<algorithm>

struct segements{
	int xl;
	int xr;
	int d;
};

bool cmp(struct segements a, struct segements b){
	if(a.xl<b.xl && a.xr <= b.xl){return 1;}	
	else if(a.xl<=b.xl && a.xr<b.xr){return 1;}
	//else if(a.xl <= b.xl && a.xr > b.xr){return 0;}
	else{return 0;}

	//if(a.xr <= b.xr ){return 1;}

}

///////////////////
int subArraySum(struct segements arr[], int n, int sum) 
{ 
    int curr_sum = arr[0].d, start = 0, i; 
  
    for (i = 1; i <= n; i++) { 
        while (curr_sum > sum && start < i - 1) { 
            curr_sum = curr_sum - arr[start].d; 
            start++; 
        } 
  
        if (curr_sum == sum) { 
            std::cout << "Yes\n";
			return 1;
        } 

        if (i < n) 
            curr_sum = curr_sum + arr[i].d; 
    } 

    std::cout << "No\n"; 
    return 0;
} 
//////////////////

int main(){
	int t,n,l;
	std::cin>>t;
	while(t--){
		std::cin>>n>>l;
		struct segements arr[n];
		for(int i=0;i<n;i++){
			std::cin>>arr[i].xl>>arr[i].xr;
			arr[i].d = arr[i].xr-arr[i].xl;
		}

		std::sort(arr,arr+n,cmp);

		/*for(auto i=0;i<n;i++){
			std::cout<<arr[i].d<<" ";
		}*/
		subArraySum(arr,n,l);
	}
}
