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
//
//vector<ull> triangles;
//
//ull binarysearchhehe(int low, int high, ull x)
//{
//    int mid = (low + high) / 2;
//    while (low <= high && triangles[mid] != x)
//    {
//        if (triangles[mid] < x && triangles[mid + 1] > x)
//            return mid;
//        if (triangles[mid] < x)
//            low = mid + 1;
//        else
//            high = mid - 1;
//
//        mid = (low + high) / 2;
//    }
//    return mid;
//}
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    //    //precalculation
//    //    ull hehe = 0;
//    //    ull counter = 0;
//    //    ull bound = 1000000000000000000;
//    //    while (hehe < bound)
//    //    {
//    //        counter++;
//    //        hehe += counter;
//    //        triangles.push_back(hehe);
//    //    }
//    int cases;
//    cin>>cases;
//    while (cases--)
//    {
//        ull x;
//        cin>>x;
//        ull result = ull((sqrt(1+(8*x)) - 1)/2);
//        cout<<result<<endl;
//    }
//    return 0;
//}
//
