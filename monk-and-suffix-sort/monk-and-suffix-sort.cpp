#include<iostream>
#include<cctype>
#include<cstring>
#include<algorithm>

using namespace std;

struct suffix 
{ 
    int index; 
    char *suff; 
}; 
  
// A comparison function used by sort() to compare two suffixes 
int cmp(struct suffix a, struct suffix b) 
{ 
    return strcmp(a.suff, b.suff) < 0? 1 : 0; 
} 
  
void *buildSuffixArray(char *txt, int k) 
{ 	
	int n = strlen(txt);
    struct suffix suffixes[n]; 
  

    for (int i = 0; i < n; i++) 
    { 
        suffixes[i].index = i; 
        suffixes[i].suff = (txt+i); 
    } 
   
    sort(suffixes, suffixes+n, cmp); 
  
    printf("%s",suffixes[k-1].suff);
} 

int main(){
	char s[25];
	int k,min;
	scanf("%s",s);
	scanf("%d",&k);
	
	buildSuffixArray(s,k);
}