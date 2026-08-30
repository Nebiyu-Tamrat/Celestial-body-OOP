#ifndef EXPLORER_H
#define EXPLORER_H

#include <string>

class Explorer
{
public:
    virtual std::string explore() const = 0;
    virtual ~Explorer() = default;
};

#endif