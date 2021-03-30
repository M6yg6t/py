#include <stdio.h>
typedef unsigned char *byte_pointer;

/*void show_bytes(byte_pointer start,int len){
	int i;
	for(i=0;i<len;i++)
		printf("%.2x",start[i]);
	printf("\n");
}
void show_int(int x){
	show_bytes((byte_pointer)&x,sizeof(int));
}
void show_float(float x){
        show_bytes((byte_pointer)&x,sizeof(float));
}
void show_pointer(void *x){
        show_bytes((byte_pointer)&x,sizeof(void *));
}
*/
void show_bytes(byte_pointer start,int len){
	int i;
	for(i=0;i<len;i++)
		printf("%.2x",start[i]);
	printf("\n");
}
void show_int(int x){
	show_bytes((byte_pointer)&x,sizeof(int));
}
void show_float(float x){
        show_bytes((byte_pointer)&x,sizeof(float));
}
void show_pointer(void *x){
        show_bytes((byte_pointer)&x,sizeof(void *));
}
void main(){
	int a;
	printf("input your number:");
	scanf("%d",&a);
	float b =(float) a;
	int *c=&a;
	show_int(a);
	show_float(b);
	show_pointer(c);
}
