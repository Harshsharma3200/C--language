#include<bits/stdc++.h>
using namespace std;
//======================Merge Sortings =================
// void merge(int arr[],int l,int mid,int r)
// {
//     int n1=mid-1,n2=r-mid;
//     int a[n1],b[n2];
//     for(int i=0;i<n1;i++)
//         a[i]=arr[l+i];
//     for (int i=0;i<n2;i++)
//         b[i]=arr[mid+1+i];

//     int i=0,j=0,k=l; 

// }
// void mergesort(int arr[],int l,int r)
// {
//     if(l<r)
//     {
//         int mid=(l+r)/2;
//         mergesort(arr,l,mid);
//         mergesort(arr,mid+1,r);

//         merge(arr,l,mid,r);
//     }
// }
// int main() {
//     int arr[]={5,4,3,2,1,0};
//     mergesort(arr,0,4);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;	
// }

//===================Quicksort
void swap(int arr[],int i,int j)
{
    int t=arr[i];
    arr[i] = arr[j];
    arr[j]=t;
}

int partition(int arr[],int l,int r)
{
    int privot=arr[r];
    int i=l-1;
    for(int j = 0; j < r; j++)
    {
        if (arr[j]<privot)
        {
            i++;
            swap(arr,i,j);
        }
    }
        swap(arr,i+1,r);
        return i+1;
}


void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main()
{
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i= 0; i < 5; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}