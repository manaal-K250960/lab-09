#include<stdio.h>
int main(){
	int i,j;
	int rollno[5]={1,2,2,4,4};
	for( i=0;i<5;i++){
	for ( j=i+1;j<5;j++){
		if(rollno[i]==rollno[j]){
		rollno[j]++;
	}
	else{
		
	}
}
}
  j=0;
	for( j=0;j<5;j++){
	printf("%d ",rollno[j]);
	}		
	return 0;
}
