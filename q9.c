#include <stdio.h>

int main(){
	int seat[10]={0};
	int i,j;
	int booking=0;
	 while(booking<5){
	 	printf("enter seat to book(0-9):");
	 	scanf("%d",&i);
	 	
	 	if(i<0 || i>9){
	 		printf("invalid seat number");
	 		continue;
		 }
		 if (seat[i]==0){
		 seat[i]=1;
		 booking++;
		 printf("seat booked succesfully\n");
	 }else{
	 	printf("seat already booked\n");
	 }
}
	printf("status(1=booked,2=available)\n:");
	for(j=0;j<10;j++){
		printf("seat:%d       status:%d\n",j,seat[j]);		
	}
	return 0;
}