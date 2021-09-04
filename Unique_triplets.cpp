#include<iostream>
using namespace std;
 // Prints all triplets in arr[] with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0)
                {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] <<endl;
                    found = true;
                }
            }
        }
    }
 
    // If no triplet with 0 sum found in array
    if (found == false)
        cout << " not exist "<<endl;
 
}
 
// Driver code
int main()
{
    int arr[100],i,n;
    cout<<"enter number of elements in array:"<<endl;
    cin>>n;
    cout<<"enter elements in an array:"<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    cout<<"triplets are:"<<endl;
    findTriplets(arr, n);
    return 0;
}