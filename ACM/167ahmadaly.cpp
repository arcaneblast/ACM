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
//int a[30005][4];
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int cases;
//    cin>>cases;
//    int miny = 10000000;
//    int minx = 10000000;
//    for (int i = 0; i < cases; i++)
//    {
//        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
//        if (a[i][0] < minx)
//            minx = a[i][0];
//        if (a[i][2] < minx)
//            minx = a[i][2];
//
//        if (a[i][1] < miny)
//            miny = a[i][1];
//        if (a[i][3] < miny)
//            miny = a[i][3];
//    }
//
//    int par1,par2,parpar1,parpar2;
//    par1 = a[0][0] - minx;
//    parpar1 = a[0][2] - minx;
//    par2 = a[0][1] - miny;
//    parpar2 = a[0][3] - miny;
//    
//    for(int i=1; i<cases; i++)
//    {
//        int x1,y1,x2,y2;
//        x1 = a[i][0] - minx;
//        x2 = a[i][2] - minx;
//        y1 = a[i][1] - miny;
//        y2 = a[i][3] - miny;
//        
//        par1 = max(x1, par1);
//        parpar1 = min(x2, parpar1);
//        par2 = max(y1, par2);
//        parpar2 = min(y2, parpar2);
// 
//    }
//    if(par1>=parpar1 || par2>=parpar2)
//        cout<<"0"<<endl;
//    else
//        cout << (parpar1 - par1) * (parpar2 - par2) << endl;
//    return 0;
//}
//
//
//
