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
//typedef long long ll;
//
//
//
//int back_track(map < string,vector<string> >roads,string source,string target,vector<string> selectedroad)
//{
//    selectedroad.push_back(source);
//    int mine = 1<<30;
//    for(int i=0; i<roads[source].size(); i++)
//    {
//        int tmp = 1+ back_track(roads,roads[source][i],target);
//        if(tmp<mine)
//            mine=tmp;
//        
//        selectedroad
//    }
//    return mine;
//}
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int cases;
//    cin>>cases;
//    while(cases--)
//    {
//        map < string,vector<string> >roads;
//        int m,q;
//        cin>>m>>q;
//        for(int i=0; i<m; i++)
//        {
//            string st1,st2;
//            cin>>st1>>st2;
//            roads[st1].push_back(st2);
//        }
//    }
//    return 0;
//}
//
//
//
