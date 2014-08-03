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
//    while(cin>>n && n)
//    {
//        int min = 3000000;
//        bool zfucked = false;
//        char ch;
//        char lastch='0';
//        int acc=0;
//        for(int i=0; i<n; i++)
//        {
//            cin>>ch;
//            
//            //count
//            if(lastch!='0')
//                acc++;
//            
//            //found z
//            if(ch =='Z')
//                zfucked=true;
//            
//            //found R for the first time
//            else if(ch =='R' && lastch=='0')
//                lastch='R';
//            
//            
//            
//            //found D for the first time
//            else if(ch =='D' && lastch=='0')
//                lastch='D';
//            
//            //found R for the second time in ROW
//            else if(ch =='R' && lastch=='R')
//                acc=0;
//            
//            
//            //found D for the second time in ROW
//            else if(ch =='D' && lastch=='D')
//                acc=0;
//            
//            
//            //found R after D
//            else if(ch=='R' && lastch=='D')
//            {
//                if(acc<min) min=acc;
//                lastch='R';
//                acc=0;
//            }
//            
//            
//            //found D after R
//            else if(ch=='D' && lastch=='R')
//            {
//                if(acc<min) min=acc;
//                lastch='D';
//                acc=0;
//            }
//            
//        }
//        if(!zfucked)
//            cout<<min<<endl;
//        else
//            cout<<"0"<<endl;
//    }
//    return 0;
//}