#include<stdio.h>
//nhap mang
void nhapmang(int a[], int n)
{
	for (int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
		}	
}
//xuat mang
void xuatmang(int a[], int n)
{
	for (int i=0; i<n ; i++)
	{
		printf("%d",a[i]);
	}
}
//tim max trong mang
int max(int a[], int n)
{
	int max=a[0];
	for (int i=1; i<n; i++)
	{
		if (a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
//tim vi tri cac max
void vitri(int a[], int n)
{
	printf("\nVi tri cua max la: ");
	int x=max(a,n);
	for (int i=0; i<n; i++)
	{
		if (a[i]==x)
		{
			printf("%d ",i+1);
		}
	}
}
int main()
{
	int n;
	int a[n];
	printf("\nNhap n: ");
	scanf("%d",&n);
	nhapmang(a,n);
	vitri(a,n);
}
