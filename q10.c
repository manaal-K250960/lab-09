#include <stdio.h>

int main(){
int	num[10];
int	i,j;
int search;	
int count;	 
	 	printf("enter ten numbers:");
        for(i=0;i<10;i++){
        	scanf("%d",&num[i]);
		}
			printf("enter the number you want to search:");
			scanf("%d",&search);
			
			for(i=0;i<10;i++){
				 count = 0;
					for(j=0;j<10;j++){
						if (num[j]==search){
						 count++;
						}
			}
		
		}
			if(count > 0){
			printf("the number %d is available",search);	
			}else{
			printf("the number %d is not available",search);
	}
	return 0;
}