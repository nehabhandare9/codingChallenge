
#include<bits/stdc++.h>

using namespace std;

#define ll long long


 

ll int distinct_elements(ll int arr[], ll int n){

sort(arr, arr + n);

ll int count = 0;

for (ll int i = 0; i < n; i++)

{

while (i < n - 1 && arr[i] == arr[i + 1])

     {

i++;

}

count++;

}

return count;

}

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll int t;

    cin>>t;

    while(t--)

    {   

        ll int n,i=0,j=0,c=0,k=0,maxsum=0,p,l=0,h=0,m=0;

        cin >> n>>k;

        ll int a[n] = {0};

        ll int ac[n] = {0};

        for(i=0;i<n;i++)

        {       

            cin>> a[i];

        }

m = distinct_elements(a,n);

sort(a,a+n);

        for(i=0;i<n;)

        {

            for(j = i;j<n;j++)

            {

                if(a[i]==a[j])

                {

                    c = c+1;

                    h++;

                    p = j;

                }

                else

                    goto lb;

            }

        lb: i=h;

            ac[l]=(a[p]*c);l++;c=0;p=0;

        }

sort(ac,ac+m);      

        for(i=m-1;i>=0&&k!=0;)

        {

             if(ac[i]<0)

                    i--;

                else

                {

                    maxsum = maxsum+(ac[i]);

                    i--;

                }   

            k--;

        }

    cout<<maxsum<<endl;

    }

    return 0;

}