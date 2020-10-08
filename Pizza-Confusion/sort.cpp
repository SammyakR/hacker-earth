#include <iostream>
#include <algorithm>
#include <string>

struct resto{
	std::string name;
	int value;
};

bool cmp(struct resto a, struct resto b){
	if(a.value > b.value){
		return 1;
	}
	else if(a.value < b.value){
		return 0;
	}
	else{
		return (a.name.compare(b.name) < 0) ? 1:0;
	}
}

int main(){
	int n;
	std::cin>>n;
	struct resto arr[n];
	for(int i=0;i<n;i++){
		std::cin >> arr[i].name;
		std::cin >> arr[i].value;
	}
	//std::cout<<arr[0].name<<"\n";
	std::sort(arr,arr+n,cmp);

	std::cout<<arr[0].name<<"\n";

return 0;
}
