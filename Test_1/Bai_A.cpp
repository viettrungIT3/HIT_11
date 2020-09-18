#include <Bits/stdc++.h>
using namespace std;

double DoDai( float x1, float x2, float y1, float y2)
{
    return sqrt( abs( pow( (x1-y1), 2) - pow( (x2-y2), 2) ) );
}

int main(int argc, char const *argv[])
{
    float x1, x2, y1, y2, z1, z2;
    cin>>x1>>x2;
    cin>>y1>>y2;
    cin>>z1>>z2;
    double a = DoDai(x1, x2, y1, y2);
    double b = DoDai(y1, y2, z1, z2);
    double c = DoDai(z1, z2, x1, x2);
    if ( (a + b > c) && ( b +c > a) && ( a + c > b))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}
