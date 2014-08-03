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
//typedef long long ll;
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int n;
//    cout << "PERFECTION OUTPUT" << endl;
//    while (cin >> n && n)
//    {
//        printf("%5d  ", n);
//        vector<int> divs(1, 1);
//        int high_bound = ceil(n / 2.0);
//        for (int i = 2; i <= high_bound; i++)
//        {
//            if (!(n % i))
//                divs.push_back(i);
//        }
//
//        ll sum = 0;
//        for (int i = 0; i < divs.size(); i++)
//        {
//            sum += divs[i];
//        }
//        if (n == 1)
//            cout << "DEFICIENT" << endl;
//        else if (sum == n)
//            cout << "PERFECT" << endl;
//        else if (sum < n)
//            cout << "DEFICIENT" << endl;
//        else
//            cout << "ABUNDANT" << endl;
//    }
//    cout << "END OF OUTPUT\n";
//    return 0;
//}
//
//
//
