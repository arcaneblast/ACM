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
//typedef long long ll;
//
//ll mine(ll x,ll y,ll z)
//{
//    ll result = x;
//    if(y<result) result=y;
//    if(z<result) result=z;
//    return result;
//}
//
//
//int mat[20000001];
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    //pre
//    mat[0]=2<<15;
//    mat[1]=0;
//    for(int i=2; i<20000001; i++)
//    {
//        int by2 = i%2;
//        int by3 = i%3;
//        if(!by3)
//            mat[i] = mat[i/3]+1;
//        else if(!by2)
//            mat[i] = 1 + min(mat[i-1],mat[i>>1]);
//        else
//            mat[i] = 1 + mat[i-1];
//    }
//    
//    
//    int cases,index=0;
//    cin>>cases;
//    while (cases--)
//    {
//        index++;
//        ll n;
//        cin>>n;
//        
//        cout<<"Case "<<index<<": "<<mat[n]<<endl;
//        
//    }
//    return 0;
//}
//
//
//
