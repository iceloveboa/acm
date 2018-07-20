////
////  Uva1592.cpp
////  acm
////
////  Created by ice on 2018/7/19.
////  Copyright © 2018 ice. All rights reserved.
////
//
//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <set>
//#include <map>
//
//using namespace std;
//
//string text[10000][10];
//set<string> sset;
//map<string,int> mmap;
//
//int main(){
//    int n,m;
//    string s;
//    bool flag;
//    int c1,c2,r1,r2;
//    while (cin>>n>>m) {
//        getchar();
//        flag = true;
//        
//       
//        for (int i = 0; i<n; i++) {
//            for (int j = 0; j<m; j++) {
//                if (j == m - 1) {
//                    getline(cin,text[i][j]);
//                }else{
//                    getline(cin, text[i][j],',');
//                }
//            }
//        }
//        
//        for (c1 =0; c1<m; c1++) {
//            for (c2=c1+1; c2<m; c2++) {
//                sset.clear();
//                mmap.clear();
//                for (r1 = 0; r1 < n ; r1++) {
//                    string k = text[r1][c1] +','+text[r1][c2];
//                    if (!sset.count(k)) {
//                        sset.insert(k);
//                        mmap[k] = r1;
//                    }else{
//                        flag = false;
//                        r2 = mmap[k];
//                        goto eend;
//                    }
//                }
//            }
//        }
//        
//    eend:
//        if (flag) {
//            cout<<"YES"<<endl;
//        }else{
//            cout<<"NO\n"<<r2+1<<" "<<r1+1<<"\n"<<c1+1<<" "<<c2+1<<endl;
//        }
//    }
//    
//    return 0;
//    
//}
