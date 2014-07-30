//#include <iostream>
//#include <string>
//#include <sstream>
//#include <algorithm>
//#include <cstring>
//#include <iomanip>
//#include <stdio.h>
//
//using namespace std;
//
//double
//add(string time1, string time2, int s)
//{
//    int h1, m1, s1, h2, m2, s2;
//    h1 = atoi(time1.substr(0, 2).c_str());
//    m1 = atoi(time1.substr(3, 2).c_str());
//    s1 = atoi(time1.substr(6, 2).c_str());
//
//    h2 = atoi(time2.substr(0, 2).c_str());
//    m2 = atoi(time2.substr(3, 2).c_str());
//    s2 = atoi(time2.substr(6, 2).c_str());
//
//    return ((h1 - h2) * s + (m1 - m2) * s / 60.0 + (s1 - s2) * s / 3600.0);
//
//}
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//
//    string s;
//    string time = "", lasttime;
//    double distance = 0;
//    int lastspeed = -1, speed = 0;
//    while (getline(cin, s))
//    {
//        stringstream ss;
//        ss << s;
//        string hehe;
//        int i = 0;
//        while (ss >> hehe)
//        {
//            if (!i)
//            {
//                lasttime = time;
//                time = hehe;
//            }
//            else
//            {
//                lastspeed = speed;
//                speed = atoi(hehe.c_str());
//            }
//            i++;
//        }
//        if (i == 2 && lasttime != "" )
//            distance += add(time, lasttime, lastspeed);
//        else if(lasttime != "")
//            distance += add(time, lasttime, speed);
//
//        if (i == 1)
//        {
//            cout << time << " ";
//            printf("%.2f km", distance);
//            cout << endl;
//        }
//    }
//    return 0;
//}
