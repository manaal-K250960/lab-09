#include <stdio.h>

int main(){
	int a[50];
	int b[50];
	int c[50];
	int n_a,n_b,i,j;
	printf("enter no of students for section a:");
	scanf("%d",&n_a);
		printf("enter no of students for section b:");
	scanf("%d",&n_b);
	
	printf("enter student ids for sec a:");
	for(i=0;i<n_a;i++){
		scanf("%d",&a[i]);
	}
	
		printf("enter student ids for sec b:");
	for(i=0;i<n_b;i++){
		scanf("%d",&b[i]);
	
	}
	for(i=0;i<n_a;i++){
		c[i]=a[i];
	}
		for(j=0;j<n_b;j++){
		c[i+j]=b[j];
	}
	for(i=0;i<n_a+n_b;i++){
	printf("\n%d\n",c[i]);
}
	return 0;
}