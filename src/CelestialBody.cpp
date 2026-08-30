#include "CelestialBody.h"

CelestialBody::CelestialBody(
    const std::string& name,
    double equator
)
    : name(name), equator(equator)
{
}

std::string CelestialBody::getName() const
{
    return name;
}

double CelestialBody::getEquator() const
{
    return equator;
}