#include "include/maxmin.h"

int max(int a[]) {
int max=a[1];
int i;

for(i=2;i<=a[0];i++){
	if(a[i]>max)
		max=a[i];
}	

return max;
}

int min(int a[]) {
int min=a[1];
int i;

for(i=2;i<=a[0];i++){
	if(a[i]<min)
		min=a[i];
}	

return min;
}

