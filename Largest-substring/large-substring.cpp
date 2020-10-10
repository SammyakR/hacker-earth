#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	//cout<<str.max_size()<<"\n";
	unordered_map<int,int> umap;
	int sum=0,maxLen=0;
	for(int i=0;i<n;i++){
		sum+= (str[i] == '1') ? -1:1;

		if(sum > 0){
			maxLen = i+1;
		}
		else if(sum <= 0 && umap.find(sum-1) != umap.end()){
			if(maxLen < (i - umap[sum-1])){
				maxLen = i - umap[sum-1];
			}
		}
		
		if(umap.find(sum) == umap.end()){
			umap[sum] = i;
		}


	}

	cout<<maxLen;
}

