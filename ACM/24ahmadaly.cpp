//#include <iostream>
//#include <cmath>
//#include <math.h> make a new comment
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
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//
//    int cases;
//    cin>>cases;
//    while (cases--)
//    {
//        int n;
//        cin>>n;
//        vector<string> words(n);
//        bool English = false;
//        int Englishindex=0;
//        int i = 0;
//        while (i < n)
//        {
//            cin >> words[i];
//            i++;
//            if (words[i-1][0] != '#')
//            {    
//                English = true;
//                Englishindex=i-1;
//            }
//        }
//        if (English)
//        {
//            reverse(words.begin(), words.end());
//            reverse(words.begin(),words.begin()+(n-Englishindex-1));
//            reverse(words.begin()+(n-Englishindex),words.end());
//        }
//        for (int i = 0; i < n; i++)
//            cout << words[i] << " ";
//        cout << endl;
//    }
//    return 0;
//}
//
//
//
//
