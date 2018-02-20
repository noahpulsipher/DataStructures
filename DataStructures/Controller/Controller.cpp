//
//  Controller.cpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
//    Timer codeTimer;
//    codeTimer.startTimer();
//    cout << "Look code on the screen" << endl;
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
//    codeTimer.resetTimer();
//    codeTimer.startTimer();
//
//    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/npul1355/Documents/C++/DataStructures/DataStructures/Data/crime.csv");
//
//    for (int index = 200; index < 216; index ++)
//    {
//        cout << index << " is " << myData[index] << endl;
//    }
//
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
    
//    findMaxAndMin();
    
//    testArray();
    
//    ArrayTester myTest;
//    myTest.testArrayUse();
//    myTest.testAdvancedArray();
    
    LinkedListTester linkTest;
    linkTest.testListBasics();
    linkTest.testListWithData();
    
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/npul1355/Documents/C++/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index ++)
    {
        if (myData [minIndex] > myData [index])
        {
            minIndex = index;
        }
        if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

void Controller :: testArray()
{
    Array<int> noahArray(420);
    
    noahArray[0] = 123;
    noahArray.setAtIndex(0, 321);
    
    cout << noahArray[0] << endl;
}
