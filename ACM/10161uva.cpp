//
//
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
//#include <map>
//using namespace std;
//typedef unsigned long long ull;
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    ull n;
//    int counter=1;
//    while(cin>>n && n)
//    {
//        bool onx=true;
//        bool inc =true;
//        bool simpleStep=false;
//        ull x=1,y=1,step=2;
//        for(ull i=1; i<=n; i++)
//        {
//            if(counter>=2)
//            {
//                step++;
//                counter=0;
//            }
//            if(simpleStep)
//            {
//                if(onx && inc)
//                {
//                    x++;
//                    onx =false;
//                    if(y==1)
//                        inc = true;
//                    else
//                        inc = false;
//                }
//                else if(!onx && inc)
//                {
//                    y++;
//                    onx=true;
//                    if(x==1)
//                        inc=true;
//                    else
//                        inc=false;
//                }
//                simpleStep=false;
//            }
//            else if(onx && inc )
//            {
//                x++;
//                if(x==step)
//                {
//                    onx=false;
//                    inc=true;
//                }
//            }
//            else if(!onx && inc)
//            {
//                y++;
//                if(y==step)
//                {
//                    onx=true;
//                    inc=false;
//                }
//            }
//            else if(!onx && !inc)
//            {
//                y--;
//                if(y==1)
//                {
//                    onx=true;
//                    inc=true;
//                    simpleStep=true;
//                    counter++;
//                }
//            }
//            else if(onx && !inc)
//            {    
//                x--;
//                if(x==1)
//                {
//                    onx=false;
//                    inc=true;
//                    simpleStep=true;
//                    counter++;
//                }
//            }
//            
//        }
//        cout<<x<<" "<<y<<endl;
//    }
//    return 0;
//}
//
//
//
