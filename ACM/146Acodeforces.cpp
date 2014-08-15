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
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int n;
//    cin>>n;
//    
//    if(n%2)
//        cout<<"NO"<<endl;
//    else
//    {
//        string num;
//        cin>>num;
//        ull left=0,right=0;
//        for(int i=0; i<n; i++)
//        {
//            if(num[i]!='4' && num[i]!='7')
//            {
//                cout<<"NO"<<endl;
//                return 0;
//            }
//            if(i < n/2)
//                left += num[i] - '0';
//            else
//                right += num[i] - '0';
//        }
//        if(left==right)
//            cout<<"YES"<<endl;
//        else
//            cout<<"NO"<<endl;
//    }
//    return 0;
//}
//
//
