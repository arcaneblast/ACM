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
//vector<string> dict;
//
//string bullshit(int n)
//{
//    string s = "";
//    for (int i = 0; i < n; i++)
//        s += '*';
//    return s;
//}
//
//bool match(string s1, string s2, char a[26], bool taken[26])
//{
//    //s1 is enc
//    //s2 is dec
//
//    if (s1.length() != s2.length())
//        return false;
//
//
//    for (int i = 0; i < s1.length(); i++)
//    {
//        if (a[s1[i] - 'a'] == '*' && !taken[s2[i] - 'a'] )
//        {
//            a[s1[i] - 'a'] = s2[i];
//            taken[s2[i] - 'a'] = true;
//        }
//        else if (a[s1[i] - 'a'] == s2[i])
//        {
//            a[s1[i] - 'a'] = s2[i];
//        }
//        else
//            return false;
//    }
//    return true;
//}
//
//string decrypt(string s, char a [26], bool taken[26])
//{
//    char backup[26];
//    copy(a, a + 26, backup);
//    bool backup_taken[26];
//    copy(taken, taken + 26, backup_taken);
//
//    int i;
//    for (i = 0; i < dict.size(); i++)
//    {
//        if (match(s, dict[i], a, taken))
//            return dict[i];
//        else
//        {
//            copy(backup, backup + 26, a);
//            copy(backup_taken, backup_taken + 26, taken);
//        }
//    }
//    return "*";
//}
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//    int n;
//    string n_str;
//    getline(cin,n_str);
//    n = atoi(n_str.c_str());
//    for (int i = 0; i < n; i++)
//    {
//        string tmp;
//        getline(cin,tmp);
//        dict.push_back(tmp);
//    }
//    string encrypted;
//    while (getline(cin, encrypted))
//    {
//        char replacment_table[26];
//        bool taken[26] = {0};
//        memset(replacment_table, '*', 26);
//        stringstream ss;
//        ss << encrypted;
//        string word;
//        bool first = true;
//        while (ss >> word)
//        {
//            string result = decrypt(word, replacment_table, taken);
//            if (first)
//            {
//                first = false;
//                if (result == "*")
//                    cout << bullshit(word.length());
//                else
//                    cout << result;
//            } else
//            {
//                cout << " ";
//                if (result == "*")
//                    cout << bullshit(word.length());
//                else
//                    cout << result;
//            }
//
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
//
//
