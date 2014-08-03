#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;
typedef long long ull;

ull moder =33554431;

//BIG MODE CODE...
ull  bigmod (ull p, ull m )
{
    if ( p == 0 )return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
    {
        return  ((( bigmod (p - 1, m ) )<<1 ) % m); 
    }
    else //If power is even then split it equally and return the result...
    {
        ull c = bigmod (p >>1, m ); 
        return ( (c%m) * (c%m) ) % m;
    }
}
int
main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    
    int cases;
    cin>>cases;
    while(cases--)
    {

        ull n;
        cin>>n;
        cout<<bigmod(n+1,moder)-1<<endl;
    }
    return 0;
}

