#include<stdio.h>
int main(){
	int marks[10];
	int i=0;
	for (i=0;i<10;i++){
		printf("enter marks: ");
		scanf("%d", &marks[i]);
	}
	int max=marks[0];
	for ( i=0;i<10;i++){
		if(max<marks[i]){
		max=marks[i];
		}
		else{
		max=max;
		}	
	}
	printf("maximum marks are: %d",max);	
	return 0;
}
