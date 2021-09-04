#include<iostream>
using namespace std;
 
int maxSum(int arr[], int K,
           int start, int end,
           int max_sum)
{
   
    if (K == 0)
        return max_sum;
 
    
    int max_sum_start = max_sum
                        + arr[start];
 
  
    int max_sum_end = max_sum + arr[end];
 
  
    int ans = max(
        maxSum(arr, K - 1, start + 1,
               end, max_sum_start),
        maxSum(arr, K - 1, start,
               end - 1, max_sum_end));
 
 
    return ans;
}
 

void maximizeSum(int arr[], int K, int n)
{
    int max_sum = 0;
    int start = 0;
    int end = n - 1;
 
    cout << maxSum(arr, K, start,
                   end, max_sum);
}
 
int main()
{
    int arr[100],n,K,i;
    cout<<"Enter the distinct numbers to be chosen:"<<endl;
    cin>>K;
    cout<<"enter the number of elements in an array:"<<endl;
    cin>>n;
    cout<<"Enter elements in array: "<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<"the sum is :"<<endl;
    maximizeSum(arr, K, n);
 
    return 0;
}