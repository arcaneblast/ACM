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
//
//int a[101][101]={0};
//ull moder = 1000000007;
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    
//    //pre
//    a[0][0]=1;
//    for(int i=0; i<101; i++)
//    {
//        for(int j=0; j<101; j++)
//        {
//            if(!i && !j) continue;
//            
//            if(i>0)
//                a[i][j] += a[i-1][j] % moder;
//            if(j>0)
//                a[i][j] += a[i][j-1] %moder;
//            a[i][j] %= moder;
//                
//        }
//    }
//    
//    int n,m;
//    while(cin>>n>>m && n>0)
//    {
//        cout<<a[n][m]<<endl;
//    }
//    
//    return 0;
//}
//
//
//
//
