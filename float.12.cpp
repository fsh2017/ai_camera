#include<stdio.h>
int main() {
	char a[]="Hello world" ;
	float *f=(float*)a;
	printf("%s\n",a);
	printf("%g\n",*f);
	printf("%g\n",*(f+1));
	printf("%g\n",*(f+2));
	return 0;
}
