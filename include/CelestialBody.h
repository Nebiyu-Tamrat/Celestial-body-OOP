#ifndef CELESTIALBODY_H
#define CELESTIALBODY_H

#include <string>

class CelestialBody
{
private:
    std::string name;
    double equator;

public:
    CelestialBody(const std::string& name, double equator);

    std::string getName() const;
    double getEquator() const;

    virtual ~CelestialBody() = default;
};

#endif