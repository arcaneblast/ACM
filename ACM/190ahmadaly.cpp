
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <vector>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;

int
main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ull n,t,b;
    int idex=0;
    while(cin>>n>>t>>b)
    {
        t%=n;
        idex++;
        vector<ull> divs;
        divs.push_back(1);
        ull upperlimit = ull(ceil(sqrt(b)));
        for(ull i=2; i<=t; i++)
        {
            if(i >  upperlimit)
                break;
            else if(b %i==0)
                divs.push_back(i);
        }
        
        int qawasem = divs.size();
        if(upperlimit*upperlimit==b)
            qawasem--;
        for(ull i=divs.size(); i>=1; i--)
        {
            if(b/divs[i-1] > t)
                break;
            qawasem++;
        }
        if(qawasem&1&t)
            cout<<"Case "<<idex<<": On"<<endl;
        else
            cout<<"Case "<<idex<<": Off"<<endl;
    }
    return 0;
}



