//
//  Uva136.cpp
//  acm
//
//  Created by ice on 2018/7/19.
//  Copyright © 2018 ice. All rights reserved.
//

//#include <iostream>
//#include <set>
//#include <queue>
//#include <vector>
//
//using namespace std;
//typedef long long LL;
//
//const int mult[3] = {2,3,5};
//int main(){
//    priority_queue<LL,vector<LL>, greater<LL> > pq;
//    set<LL> s;
//    pq.push(1);
//    s.insert(1);
//    
//    for (int i =1; ; i++) {
//        LL x = pq.top(); pq.pop();
//        if (i == 1500) {
//            cout<<"The 1500'th ugly number is "<<x<<".\n";
//            break;
//        }
//
//        for (int j = 0; j<3; j++) {
//            LL y = x * mult[j];
//            if (!s.count(y)) {
//                s.insert(y);
//                pq.push(y);
//            }
//        }
//    }
//    return 0;
//
//
//}
