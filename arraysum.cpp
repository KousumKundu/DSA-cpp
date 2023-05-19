#include<iostream>
using namespace std;

int arraySum(int arr[], int n)
{
    int s = 0;
    for(int i=0 ; i<n ; i++)
    {
        s+=arr[i];
    }
    return s;
}

int main()
{
    int arr[5]={4 ,3,-3,7,9};
    cout<<"Sum of Array: "<<arraySum(arr,5);
}