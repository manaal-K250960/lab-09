#include <stdio.h>

int main(){
	int n,i,j;
	int budget;
	int count=0;
	printf("enter the no of products available:");
	scanf("%d",&n);
		printf("enter budget:");
	scanf("%d",&budget);
	int price[50];
		
	printf("enter the products prices:");
	
	for(i=0;i<n;i++){
		scanf("%d",&price[i]);
	}
		for(i=0;i<n;i++){
		    for(j=i+1;j<n;j++){	
		  if(price[i]+price[j]==budget){
		  	printf("the sum of %d and %d is equal to the budget\n",price[i],price[j]);
		  	count++;
		  	  }
		  	break; 
		  }
		  
		  }
	if(count==0){
		printf("sum not equal to budget");
	}
		return 0;
	}