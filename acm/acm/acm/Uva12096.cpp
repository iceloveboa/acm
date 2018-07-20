//#include<cstdio>
//#include<iostream>
//#include<cstring>
//#include<string>
//#include<set>
//#include<stack>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//typedef set<int> Set;//把set<int> 等效成Set，把set<int> 转化成Set类型
//map<Set, int> IDcache;//定义map，是Set类型到int的映射，即一个集合，一个ID
//vector<Set> Setcache;//定义不定长数组，不定长数组的每个元素是Set类型
////即这是一个不定长的集合的数组
////查找给定的集合x的ID，如果找不到，分配一个新的ID
//int ID(Set x) {
//    if(IDcache.count(x)) return IDcache[x];
//    //在map里count（查找）集合x,如果找到返回这个集合的ID
//    Setcache.push_back(x);//找不到的话向不定长的集合数组添加新的集合
//    return IDcache[x] = Setcache.size() - 1;
//    //返回这个集合的ID，即不定长集合数组的大小-1
//}
//
//#define ALL(x) x.begin(),x.end()
//#define INS(s) inserter(x,x.begin())
//
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while(t--) {
//        stack<int> s;//定义一个栈s，这个栈里存放的是每个集合的ID
//        //每个集合都可以表示成所包含元素的ID的集合
//        int n;
//        cin >> n;
//        for(int i=0; i<n; i++)
//        {
//            string op;//读入每一条操作
//            cin >> op;
//            if(op[0] == 'P') s.push(ID(Set()));//PUSH空集入栈，Set()就表示这是空集
//            else if(op[0] == 'D') s.push(s.top());//DUP，把当前的栈顶元素入栈
//            else {//其他的操作
//                Set x1 = Setcache[s.top()]; s.pop();
//                Set x2 = Setcache[s.top()]; s.pop();//出栈两个集合，存放到x1x2中
//                Set x;//定义一个集合变量x，用来处理中间值
//                if(op[0] == 'U') set_union (ALL(x1), ALL(x2), INS(x));//把集合x1和集合x2的并集存放到x中
//                //估计集合的存储像链表那样，所有用x.begin(),x.end()把这个集合的所有元素便利
//                //inserter(x,x.begin())是从x.begin()开始插入
//                if(op[0] == 'I') set_intersection (ALL(x1), ALL(x2), INS(x));//把集合x，x2的交集存到x里
//                if(op[0] == 'A') { x = x2; x.insert(ID(x1)); }//把集合x1插入到x2中
//                s.push(ID(x));//把集合x的ID入栈
//            }
//            cout << Setcache[s.top()].size() << endl;//输出对应ID的不定长集合数组的大小
//        }
//        printf("***\n");
//        
//    }
//    return 0;
//}
