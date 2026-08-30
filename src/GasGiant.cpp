#include "GasGiant.h"

#include <sstream>

GasGiant::GasGiant(
    const std::string& name,
    double equator,
    double distanceFromSun,
    double gravity,
    bool hasWater,
    const std::string& dominantGas,
    const std::string& planetType
)
    : CelestialBody(name, equator),
      Planet(distanceFromSun, gravity, hasWater),
      dominantGas(dominantGas),
      planetType(planetType)
{
}

std::string GasGiant::getDominantGas() const
{
    return dominantGas;
}

std::string GasGiant::getPlanetType() const
{
    return planetType;
}

std::string GasGiant::explore() const
{
    std::ostringstream information;

    information << "Name: " << getName() << "\n";
    information << "Equator: " << getEquator() << " km\n";
    information << "Distance from the Sun: "
                << getDistanceFromSun()
                << " million km\n";
    information << "Gravity: "
                << getGravity()
                << " m/s^2\n";
    information << "Water on the surface: "
                << (getHasWater() ? "Yes" : "No")
                << "\n";
    information << "Dominant gas: "
                << dominantGas
                << "\n";
    information << "Planet type: "
                << planetType
                << "\n";

    return information.str();
}