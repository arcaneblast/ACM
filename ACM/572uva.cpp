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
//int a_go[8]={-1,1,-1,1,1,-1,0,0};
//int b_go[8]={-1,1,1,-1,0,0,1,-1};
//int n,m;
//char  mat[100][100];
//
//void DFS(int x,int y)
//{
//    mat[x][y]='*';
//    for(int i=0; i<8; i++)
//    {
//        int x1 = x+ a_go[i];
//        int y1 = y+ b_go[i];
//        if(x1>=0 && y1>=0 && x1<m && y1<n && mat[x1][y1]=='@')
//            DFS(x1,y1);
//    }
//}
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//
//    
//    while (cin>>m>>n && m && n)
//    {
//        for(int i=0; i<m; i++)
//            for(int j=0; j<n; j++)
//                cin>>mat[i][j];
//        
//        
//        int k=0;
//        for(int i=0; i<m; i++)
//            for(int j=0; j<n; j++)
//            {
//                if(mat[i][j]=='@')
//                {
//                    DFS(i,j); k++;
//                }
//            }
//        
//        cout<<k<<endl;
//    }
//
//    return 0;
//}
//
//
//
