#include "Planet.h"

Planet::Planet(
    double distanceFromSun,
    double gravity,
    bool hasWater
)
    : distanceFromSun(distanceFromSun),
      gravity(gravity),
      hasWater(hasWater)
{
}

double Planet::getDistanceFromSun() const
{
    return distanceFromSun;
}

double Planet::getGravity() const
{
    return gravity;
}

bool Planet::getHasWater() const
{
    return hasWater;
}