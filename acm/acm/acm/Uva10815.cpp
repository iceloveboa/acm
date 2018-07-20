////
////  Uva10815.cpp
////  acm
////
////  Created by ice on 2018/7/13.
////  Copyright © 2018 ice. All rights reserved.
////
//
//#include <stdio.h>
//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <set>
//
//using namespace std;
//
//int main(){
//    set<string> dict;
//    string s,buf;
//    while (cin>>s) {
//        for (int i = 0 ; i<s.length(); i++) {
//            if (isalpha(s[i])) {
//                s[i] = tolower(s[i]);
//            }else{
//                s[i] = ' ';
//            }
//        }
//        
//        stringstream ss(s);
//        while (ss>>buf) {
//            dict.insert(buf);
//        }
//    }
//    
//    for (set<string>::iterator it = dict.begin(); it != dict.end() ; it++) {
//        cout<<*it<<endl;
//    }
//    
//    return 0;
//}
//
