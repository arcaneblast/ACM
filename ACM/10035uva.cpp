//#include <iostream>
//#include <string>
//#include <sstream>
//#include <algorithm>
//#include <cstring>
//#include <iomanip>
//#include <stdio.h>
//
//using namespace std;
//typedef long long ll;
//
//int
//main()
//{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//
//    ll x,y;
//    while(cin>>x>>y )
//    {
//        if(x==0 && y==0)
//            return 0;
//        int k=0;
//        bool carry = false;
//        while(x || y)
//        {
//            int mod1 = x%10;
//            int mod2 = y%10;
//            x/=10;
//            y/=10;
//            if(!carry &&mod1+mod2>=10)
//            {
//                k++;
//                carry = true;
//            }
//            else if(carry &&   mod1+mod2>=9)
//            {
//                k++;
//                carry =true;
//            }
//            else
//                carry = false;
//        }
//        if(k==1)
//            cout<<"1 carry operation."<<endl;
//        else if(k)
//            cout<<k<<" carry operations."<<endl;
//        else
//            cout<<"No carry operation."<<endl;
//    }
//    return 0;
//}
