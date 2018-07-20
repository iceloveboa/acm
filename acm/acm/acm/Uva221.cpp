//
//  Uva221.cpp
//  acm
//
//  Created by ice on 2018/7/20.
//  Copyright © 2018 ice. All rights reserved.
//


#include <cstdio>
#include <algorithm>

using namespace std;

const int maxn = 100 + 5;

struct Building{
    int id;
    double x,y,w,d,h;
    bool operator > (const Building& rhs) const{
        return x<rhs.x ||(x == rhs.x && y<rhs.y);
    }
}b[maxn];



