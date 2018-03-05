//
//  Controller.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Controller/Tools/Timer.hpp"
#include "FileController.hpp"
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Model/Structures/Linear/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/LinkedListTester.hpp"
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Testers/RecursionTester.hpp"


class Controller
{
private:
    void testArray();
    void findMaxAndMin();
public:
    void start();
};

#endif /* Controller_hpp */
