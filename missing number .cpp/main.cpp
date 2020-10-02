#include <iostream>

using namespace std;
int missing_number(int A[],int n)//1st method
{
    int total=((n+1)*(n+2))/2,sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=A[i];
    }
    return total-sum;
}
int main()
{   int arr[]={1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<missing_number(arr,n);

}
//2nd Method
int missing_number(int A[],int n)
{
    int total=((n+1)*(n+2))/2;
    for(int i=0;i<n;i++)
    {
       total-=A[i];
    }
    return total;
}
int main()
{   int arr[]={1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<missing_number(arr,n);
}

//3rd Method
int missing_number(int A[],int n)
   int i,total=1;
    for(i=2;i<n+1;i++)
    {
       total+=i;
       total-=A[i-2];
    }
    return total;
}
int main()
{   int arr[]={1,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<missing_number(arr,n);
}
