////
////  Uva400.cpp
////  acm
////
////  Created by ice on 2018/7/19.
////  Copyright © 2018 ice. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//
//const int maxcol = 60;
//const int maxn = 100 + 5;
//
//string filename[maxn];
//
//void print(const string& s, int len, char extra){
//    cout<<s;
//    for (int i = 0 ; i<len-s.length(); i++) {
//        cout<<extra;
//    }
//}
//
//int main(){
//    int n;
//    while (cin>>n) {
//        int M = 0;
//        for (int i = 0 ; i<n; i++) {
//            cin>>filename[i];
//            M = max(M,(int)filename[i].length());
//        }
//        
//        int cols = (maxcol - M) / (M + 2) + 1;
//        int rows = (n-1) / cols  + 1;
//        
//        print("",60,'-');
//        cout<<"\n";
//        sort(filename,filename+n);
//        for (int i = 0; i<rows; i++) {
//            for (int j=0; j<cols; j++) {
//                int idx = j*rows+i;
//                if (idx<n) {
//                    print(filename[idx], j == cols -1 ? M : M+2, ' ');
//                }
//            }
//           cout<<"\n";
//        }
//        
//    }
//    return 0;
//}
