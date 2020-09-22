#include <bits/stdc++.h>
using namespace std;

bool ktSNT( int n)
{
    if (n < 2 )
    {
        return false;
    }
    for (int i = 2; i <= sqrt((float)n ); i++)
    {
        if ( n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void SortArr( int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ( a[i] > a[j] )
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, x;
    int a[2000];
    cin>>n>>x;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if ( ktSNT(x) )
    {
        ++n;
        a[n-1] = x;
    }
    SortArr( a, n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}


