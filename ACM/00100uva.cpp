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
//ull a[1000000]={0};
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    ull x, y;
//    a[0] = 0;
//    for (int i = 1; i < 1000000; i++)
//    {
//        ull j = i;
//        int k = 0;      
//        while (j != 1)
//        {
//            if(j<1000000 && a[j]!=0)
//            {
//                k+=a[j];
//                break;
//            }
//            
//            k++;
//            if (j & 1)
//            {
//                j = (3 * j) + 1;
//            } else
//            {
//                j = j >> 1;
//            }
//        }
//        a[i]=k;
//    }
//
//    while (cin >> x >> y)
//    {
//        int max=0;
//        for(int k=x; k<=y; k++)
//        {
//            if(max<a[k])
//                max = a[k];
//        }
//        cout<<x<<" "<<y<<" "<<max+1<<endl;
//    }
//    return 0;   
//}
//
//
//
