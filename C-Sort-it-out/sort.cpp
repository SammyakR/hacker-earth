#include <iostream>
#include <algorithm>

struct container{
	int index;
	int value;
};

bool cmp(struct container c1, struct container c2){
	return (c1.value < c2.value)? 1 : 0;
}

int main(){
	int n;
	std::cin>>n;
	struct container arr[n];
	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i].value);
		arr[i].index = i;
	}

	std::sort(arr, arr+n, cmp);

	for(int i=0;i<n;i++){
		printf("%d ",arr[i].index);
	}

return 0;
}
