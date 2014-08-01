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
//char a[20][20];
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    
//    int cases;
//    cin>>cases;
//    cin.ignore();
//    while(cases--)
//    {
//        string s;
//        int n;
//        cin>>n;
//        cin.ignore();
//        getline(cin,s);
//        int i=0;
//        for(i =0; i<s.length() && i<n*n; i++)
//        {
//            a[i/n][i%n] = s[i]; 
//        }
//        if(i<n*n)
//        {
//            for(int j=i; j<n*n; j++)
//                a[j/n][j%n] = '*';
//        }
//        
//        for(int i=0; i<(2*n)-1; i++)
//        {
//            if(i<n)
//            {
//                int xx =0;
//                int yy=i;
//                while(yy>=0)
//                {
//                    cout<<a[xx][yy];
//                    yy--;
//                    xx++;
//                }
//            }
//            else
//            {
//                int xx=i-n+1;
//                int yy=n-1;
//                while(xx<n)
//                {
//                    cout<<a[xx][yy];
//                    yy--;
//                    xx++;
//                }
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//
//
//
//
