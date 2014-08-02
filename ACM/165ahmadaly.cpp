//#include <iostream>
//#include <cmath>
//#include <math.h>
//#include <string>
//#include <sstream>
//#include <algorithm>
//#include <cstring>
//#include <iomanip>
//#include <stdio.h>
//#include <vector>
//using namespace std;
//typedef unsigned long long ull;
//typedef long long ll;
//ll moder = 1000000007;
//
//
//ll pos1(ull n)
//{
//    if(n&1)
//    {
//        ull k = (n+1)>>1;
//        return ((n*k)%moder);
//    }
//    else
//    {
//        ull k = n>>1;
//        return ((k*(n+1))%moder);
//    }
//}
//ll pos2(ull n)
//{
//    //n(n+1)(2n+1)/6
//    if(n&1)
//    {
//    }
//    
//}
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int cases;
//    cin>>cases;
//    while(cases--)
//    {
//        ull n,k;
//        cin>>n>>k;
//        ull sum1=0,sum2=0;
//        if(!n)
//        {
//            cout<<sum1<<" "<<sum2<<endl;
//            continue;
//        }
//        
//        for(ull i=1; i<=n; i++)
//        {
//            ll fac= eliaspow(i, k);
//            sum1+= fac % moder;
//            ll negative = - fac;
//            negative %= moder;
//            sum2+= (i&1?moder+negative: fac % moder);
//        }
//        cout<<sum1%moder<<" "<<sum2%moder<<endl;
//    }
//    return 0;
//}
//
//
//
