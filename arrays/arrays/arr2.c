#include<stdio.h>
void main()
{
	int i;
	int a[5]={10,20,30,40,50};
	int size=sizeof(a[1]);
	printf("size is %d",size);
	printf("Address of the array",&a);
	for(i=0;i<5;i++)
	{
		printf("%d :%d\n",a[i],&a[i]);
	}
	    printf("%d %d\n",a[1] , a[i+1]);
		printf("%d %d\n",a[1] , a[i+1]);
		printf("%d %d\n",a[2] , a[i+2]);
		printf("%d %d\n",a[3] , a[i+3]);
		printf("%d %d\n",a[4] , a[i+4]);


	}