#pragma once

#include <iostream>

class IParseFle
{
public:
    virtual void parseFile(std::istream& iStream, std::ostream& oStream) = 0;
};