#include<stdio.h>
int main(){
	int id[5];
	int i=0;
	for(i=0;i<5;i++){
		printf("enter your id number: ");
		scanf("%d", &id[i]);
	}
	printf("even id number: \n");
		for(i=0;i<5;i++){
			if(id[i]%2==0){
			printf("%d \n",id[i]);
			}
		}
	printf("odd id number: \n");
		for(i=0;i<5;i++){
			if(id[i]%2!=0){
			printf("%d \n",id[i]);
			}
		}
	return 0;
}
