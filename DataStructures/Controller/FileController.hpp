//
//  FileController.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "/Users/npul1355/Documents/C++/DataStructures/DataStructures/Model/Structures/Linear/LinkedList.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};

#endif /* FileController_hpp */
