//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <iostream>
#include <string>
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Controller/Tools/Timer.cpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecurionNumbers();
    void testRecurionString();
};

#endif /* RecursionTester_hpp */
