#include <stdio.h>

int main(){
	int n,i,k;
    int id[50];
    int new_id[50];
printf("enter no of employees:");
scanf("%d",&n);

printf("enter no of positions:");
scanf("%d",&k);

printf("enter id no of each employee:");
for(i=0;i<n;i++){
	scanf("%d",&id[i]);
}

k = k % n;
for(i=0;i<n;i++){
		new_id[ (i + k) % n] = id[i];
	}
	

	printf("new order\n:");
	for(i=0;i<n;i++){
		printf("%d\n",new_id[i]);
	}
	return 0;
}	
