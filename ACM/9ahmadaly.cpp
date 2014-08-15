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
//ull mat[50][50][501]={0};
//ull moder = 1000000007;
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int cases;
//    cin>>cases;
//    while(cases--)
//    {
//        int n,m,s;
//        cin>>n>>m>>s;
//        
//        int tmp1,tmp2;
//        cin>>tmp1>>tmp2;
//        //calculation
//        for(int k=0; k<=s; k++)
//        {
//            for(int i=0; i<n; i++)
//            {
//                for(int j=0; j<m; j++)
//                {
//                    if(!k)
//                        cin>>mat[i][j][0];
//                    else
//                    {
//                        mat[i][j][k]=mat[i][j][0];
//                        for(int jj=1; jj<=k; jj++)
//                        {
//                            for(int index=0; index<8; index++)
//                            {
//                                int x1=i+(jj*a_go[index]);
//                                int y1=j+(jj*b_go[index]);
//                                if(x1>=0 && y1>=0 && x1<n && y1<m)
//                                    mat[i][j][k]+= mat[x1][y1][k-jj];
//                            }
//                        }
                            //you have forgotten the moder here
//                    }
//                }
//            }
//        }
//        cout<<mat[tmp1-1][tmp2-1][s]<<endl;
//    }
//    return 0;
//}
//
//
//
//
