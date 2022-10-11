#include <stdio.h>
int main()
{
int n,position;
printf("Enter limit:");
scanf("%d",&n);
int a[n];
int i;
printf("Enter elements:");
for(i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}
int pos;
printf("Enter position:");
scanf("%d",&pos);
printf("Enter element:");
int ele;
scanf("%d",&ele);
if(pos > n){
printf("Invalid Input");}else
{
	for(i=n-1;i>=pos-1;i--){
		a[i+1]=a[i];
        a[i]=ele;
	    }
    }
    printf("Array after insertion:");
    for(int c=0;c<n;c++){
        printf("%d",a[c]);
	}
printf("\nEnter the position :");
scanf("%d", &position);

if (position >= n+1)
printf("\nDeletion not possible.\n");
else
{
for (int c = position-1; c < n-1; c++)
a[c] = a[c+1];

printf("\nArray after deletion :");

for (int c = 0; c < n - 1; c++)
printf("%d", a[c]);
}

return 0;
}
