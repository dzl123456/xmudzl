#include <stdio.h>

int main()
{
	int a[100],i,n;
	printf("Please input n :");
	scanf("%d",&a[0]);
	printf("Please input numbers :");
	for(i=1;i<=a[0];i++)
	{
		scanf("%d",&a[i]);
	}

	printf("max = %d\n",max(a)); 
	printf("min = %d\n",min(a));

	return 0;
}
