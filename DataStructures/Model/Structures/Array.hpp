//
//  Array.hpp
//  DataStructures
//
//  Created by Pulsipher, Noah on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <iostream>
#include <assert.h>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    //Contsructor
    Array<Type>(int size);
    //Copy Contsructor
    Array<Type>(const Array<Type> & toCopy);
    //Destructor
    ~Array<Type>();
    //Operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    //Methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

#endif /* Array_hpp */
