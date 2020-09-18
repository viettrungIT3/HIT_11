#include <Bits/stdc++.h>
using namespace std;

void Display( long a[], long n)
{
    for (long i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

bool ktSNT( long n)
{
    if ( n < 2 )
    {
        return false;
    }
    for (int i = 2; i <= sqrt((float)n); i++)
    {
        if ( n % i == 0 )
        {
            return false;
        }
    }
    return true;
}

void ShortArray( long a[], long n)
{
    for (long i = 0; i < n-1; i++)
    {
        for (long j = i+1; j < n; j++)
        {
            if ( a[i] > a[i] )
            {
                long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void Insert_X( long a[], long &n, long vt, long X)
{
    for (int i = n; i > vt; i++)
    {
        a[i] = a[i-1];
    }
    a[vt] = X;
    n++;
}

int main(int argc, char const *argv[])
{
    long N, X;
    cin>>N>>X;
    long Arr[4000];
    for (int i = 0; i < N; i++)
    {
        cin>>Arr[i];
    }
    // ShortArray( Arr, N);
    for (int i = 0; i < N; i++)
    {
        if ( ktSNT( Arr[i] ))
        {
            Insert_X( Arr, N, i, X);
            if ( ktSNT( X ))
            {
                // i++;
            }
            
        }
    }
    ShortArray(Arr, N);
    Display( Arr, N);
    return 0;
}
