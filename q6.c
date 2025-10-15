#include <stdio.h>

int main(){
	int n,i,j;
	int item[50];
	int defective;
	printf("enter no of items available:");
	scanf("%d",&n);
	
	printf("enter the item code:");
	for(i=0;i<n;i++){
		scanf("%d",&item[i]);
	}
	printf("enter the item code that is defected:");
	scanf("%d",&defective);
	
	for(i=0;i<n;i++){
		if(item[i]==defective){
		for(j=i;j<n-1;j++){
			item[j]=item[j+1];
		}
		
		n--;
		i--;
	}
}
		printf("the updated list:\n");
		for(i=0;i<n;i++){
			printf("%d\n",item[i]);
		}
		return 0;
	}