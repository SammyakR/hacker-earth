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
	int n,xchanges,temp_index,temp_value;
	std::cin>>n;
	struct container arr[n];
	for(int i=0;i<n;i++){
		scanf("%d ",&arr[i].value);
		arr[i].index = i;
	}

	//std::sort(arr, arr+n, cmp);

	for(int i =0;i<n;i++){
		xchanges = 0;
		for(int j=0;j<n-1-i;j++){
			if(arr[j].value > arr[j+1].value){
				temp_index = arr[j].index;
				temp_value = arr[j].value;
				arr[j].index = arr[j+1].index;
				arr[j].value = arr[j+1].value;
				arr[j+1].index = temp_index ;
				arr[j+1].value = temp_value ;
				xchanges++;
			}
		}
		if(xchanges == 0){break;}
	}



	for(int i=0;i<n;i++){
		printf("%d ",arr[i].index);
	}

return 0;
}