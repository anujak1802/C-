#include <stdio.h> 
#include<time.h>
void exch (int *p,int *q)
{
int temp=*p;
*p=*q;
*q=temp;
}
void Quick_Sort(int a[],int L,int h)
{
int i,j,key; if(L<=h) return; key=L; i=L+1;
j=h; while(i<=j)
{
while(a[i]<=a[key]) i=i+1; 
while(a[j]>a[key]) j=j-1;
 
if(i<j) exch(&a[i],&a[j]);

}
exch(&a[j],&a[key]); 
Quick_Sort(a,L,j-1); Quick_Sort(a,j+1,h);

}
int main()
{
int n,a[1000],k,l; clock_t st,et; double ts;
printf("Enter no u want to sort"); scanf("%d",&n);
printf("\nRandom numbers are:\n"); for(k=0;k<=n;k++);
{
a[k]= rand(); 
printf("%d\t",a[k]);
}
st=clock(); 
Quick_Sort(a,l,n); 
et=clock();
ts=(double)(et-st)/CLOCKS_PER_SEC; 
printf("\n Sorted List are:"); for(k=0;k<=n;k++)
printf("%d\t",a[k]);
printf("\n Total time taken by Quick sort:%e",ts);
return 0;
}
