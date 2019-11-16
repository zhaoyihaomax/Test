//#include<iostream>
//using namespace std;
//
//int partition(int A[],int p,int r)
//{
//	int pivot=A[r];//选择最后一个元素作为轴心值 
//	int i=p;//a[p,i-1]作为已排序空间
//	for(int j=p;j<r;j++)
//	{
//		if(A[j]<pivot)
//		{
//		swap(A[i],A[j]);
//		i++;
//		} 
//	}
//	swap(A[r],A[i]);
//	return i;
//}
//void swap(int &a,int &b)
//{
//	int t=a;
//	a=b;
//	b=t;
//}
//int a[10]={8,10,2,3,6,1,5};
//void quick_sort_c(int A[],int p,int r)
//{
//	if(p>=r)return;
//	
//	int q=partition(A,p,r);//获取分区点 
//	
//	quick_sort_c(A,p,q-1);//对左区间排序 
//	quick_sort_c(A,p+1,r);//对右区间排序 
//}
//
//
//
//void insertionSort(int a[],int n)
//{
//	for(int i=1;i<n;++i){
//		int value=a[i];
//		int j=i-1;
//		for(;j>=0;--j){
//			if(value<a[j]){
//				a[j+1]=a[j];
//			}else{
//				break;
//			}
//		}
//		a[j+1]=value;
//	}
//}
//
//
//
//
//
//int main()
//{
//	int n=7;
//	insertionSort(a,n);
////	quick_sort_c(a,0,n-1);
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" "; 
//	}
//	return 0;
//}




















#include<iostream>
using namespace std;
//int swap(int )
//{
//	
//} 
int main()
{
	int n=7;
	int a[7]={8,10,2,3,6,1,5};
	int z[10],y[10];
	int z1=0,y1=0;
	int q=a[n-1];
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<q)
		{
			z[z1]=a[i];
			z1++;
		}
		else
		{
			y[y1]=a[i];
			y1++;
		}
	}
	for(int i=0;i<z1;i++)cout<<z[i]<<" ";
	cout<<q<<" ";
	for(int i=0;i<y1;i++)cout<<y[i]<<" ";
	cout<<endl;

	q=a[2];
	z1=0;
	y1=0;
	
}
