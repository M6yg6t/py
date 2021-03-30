#include "stdio.h"
#define MAX 8
float sum_elements(float a[],unsigned length){
	int i;
	float result =0;
	for(i=0;i<=length-1;i++)
		result =result+a[i];
	printf("%f\n",result);
	return result;
}
void main(){
	float a[MAX];
	int count,j;
	printf("please enter the amount of numbers( no more than %d):\n",MAX);
	scanf("%d",&count);
	printf("please enter any number as the end\n");
	for(j = 0;j<=count-1;j++){
    		scanf("%f\n",&a[j]);
	}
	sum_elements(a,count);
	
}
