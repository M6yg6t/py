#include"stdio.h"
typedef unsigned char *byte_pointer;
void main(){
	int x=-1;
	unsigned u=2147483648;

	printf("x=%u=%d\n",x,x);
	printf("u=%u=%d\n",u,u);


	short sx=-12345;
	unsigned short usx=sx;
	int s=sx;
	unsigned ux=usx;

	printf("sx= %d:\t",sx);
	show_bytes((byte_pointer)&sx,sizeof(short));
	printf("usx= %u:\t",usx);
	show_bytes((byte_pointer)&usx,sizeof(unsigned short));
	printf("s= %d:\t",s);
	show_bytes((byte_pointer)&s,sizeof(int));
	printf("ux= %d:\t",ux);
	show_bytes((byte_pointer)&ux,sizeof(unsigned));

}
void show_bytes(byte_pointer start,int len){
	int i;
	for(i=0;i<len;i++)
		printf("%.2x",start[i]);
	printf("\n");
}
