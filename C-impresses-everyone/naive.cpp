#include<iostream>
#include<vector>


int main(){
	std::vector<char> stac;
	int n,q,temp;
	bool flag = 0;
	std::cin>>n;
	while(n--){
		std::cin>>temp;
		if(flag == 0){
			stac.insert(stac.end(),temp,'A');
			flag=1;
		}
		else{
			stac.insert(stac.end(),temp,'B');
			flag=0;
		}
	}

	/*for(auto& it : stac){
		printf("%c ",it);
	}*/
	//std::cout<<"\n";
	n=stac.size();
	std::cin>>q;
	while(q--){
		std::cin>>temp;
		std::cout<<stac[n-temp]<<"\n";
	}
}