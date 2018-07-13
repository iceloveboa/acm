////
////  Uva10474.cpp
////  acm
////
////  Created by ice on 2018/7/13.
////  Copyright © 2018 ice. All rights reserved.
////
//
////#include <iostream>
////using namespace std;
//
//#include<cstdio>
//#include <algorithm>
//
//using namespace std;
//
//const int maxn = 10000;
//
//
//int main(int argc, const char * argv[]){
//    int n,q,x,a[maxn],kase = 0;
//    
//    while (scanf("%d%d",&n,&q) == 2 && n) {
//        printf("CASE# %d:\n",++kase);
//        for (int i=0; i<n; i++) {
//            scanf("%d",&a[i]);
//        }
//        sort(a, a+n);
//        while (q--) {
//            scanf("%d",&x);
//            int p = lower_bound(a,a+n,x) - a ;
//            if(a[p] == x) printf("%d found at %d\n",x,p+1);
//            else printf("%d not found\n",x);
//        }
//    }
//}
