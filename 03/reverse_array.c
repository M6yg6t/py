#include "stdio.h"
#define MAX 8
void main(){
	int a[MAX];
	int count,i;
	printf("please enter the amount of numbers(no more than %d):\n",MAX);
	scanf("%d",&count);
	printf("please enter any number as the end:\n");
	for(i = 0;i<count;i++){
    		scanf("%d\n",&a[i]);
	}
	printf("the original array is as follow:\n");
	for(i = 0;i<count;i++){
    		printf("%d  ",a[i]);
	}
	reverse_array(a, count);
	printf("\n");	
	printf("the new array is as follow:\n");
	for(i = 0;i<count;i++){
    		printf("%d  ",a[i]);
	}
	printf("\n");	
}
void inplace_swap(int *x,int *y){
	*y=*x^*y;
	*x=*x^*y;
	*y=*x^*y;
}
void reverse_array(int a[],int cnt){
	int first,last;
	for(first=0,last=cnt-1;first < last;first++,last--)
		inplace_swap(&a[first],&a[last]);
}
