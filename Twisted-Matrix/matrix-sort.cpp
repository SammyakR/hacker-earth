#include<iostream>
#include<algorithm>


int main(){
	int n;
	scanf("%d",&n);
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d ",&mat[i][j]);
		}
	}

	int arr[n*n];
	int xmin=0,xmax=n-1,ymin=0,ymax=n-1,i=0,j=0,k=0;

	while(xmin <= xmax && ymin <=ymax){
		while(j<=xmax){arr[k] = mat[i][j];j++;k++;}
		ymin++; i=ymin;j--;
		while(i<=ymax){arr[k] = mat[i][j];i++;k++;}
		xmax--;j=xmax;i--;
		while(j>=xmin){arr[k] = mat[i][j];j--;k++;}
		ymax--;i=ymax;j++;
		while(i>=ymin){arr[k] = mat[i][j];i--;k++;}
		xmin++;j=xmin;i++;
	}
	arr[k] = mat[n/2][n/2];
	std::sort(arr,arr+n*n);
	
	xmin=0,xmax=n-1,ymin=0,ymax=n-1,i=0,j=0,k=0;
	while(xmin <= xmax && ymin <=ymax){
		while(j<=xmax){ mat[i][j] = arr[k];j++;k++;}
		ymin++; i=ymin;j--;
		while(i<=ymax){mat[i][j] = arr[k];i++;k++;}
		xmax--;j=xmax;i--;
		while(j>=xmin){mat[i][j] = arr[k];j--;k++;}
		ymax--;i=ymax;j++;
		while(i>=ymin){mat[i][j] = arr[k];i--;k++;}
		xmin++;j=xmin;i++;
	}


	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{printf("%d ",mat[i][j]);}
		printf("\n");
	}

	
}