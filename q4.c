#include <stdio.h>

int main(){
	int n;
	int i,j;
		int sales[50];
	int max=0;
	int frequent = 0;
	printf("enter the no of products sold:");
	scanf("%d",&n);
	

	
	printf("enter the product id:");	
for(i=0;i<n;i++){
	scanf("%d",&sales[i]);
}
for(i=0;i<n;i++){
 int	count=0;
	for(j=0;j<n;j++){
		if(sales[i]==sales[j]){
		
		count++;
	}
	}
	if(count>max){
		max=count;
		frequent=sales[i];
	}
}
		printf("most frequently sold item:%d\n",frequent);	
		printf("it was sold %d times\n",max);	
		
		return 0;
}