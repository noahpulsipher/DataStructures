//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 3/26/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Model/Structures/Non-Linear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraph();
};

#endif /* GraphTester_hpp */
