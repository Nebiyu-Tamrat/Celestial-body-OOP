#include "RockyPlanet.h"

#include <sstream>

RockyPlanet::RockyPlanet(
    const std::string& name,
    double equator,
    double distanceFromSun,
    double gravity,
    bool hasWater,
    const std::string& dominantCrustElement,
    const std::string& coreComposition
)
    : CelestialBody(name, equator),
      Planet(distanceFromSun, gravity, hasWater),
      planetType("Rocky planet"),
      dominantCrustElement(dominantCrustElement),
      coreComposition(coreComposition)
{
}

std::string RockyPlanet::getPlanetType() const
{
    return planetType;
}

std::string RockyPlanet::getDominantCrustElement() const
{
    return dominantCrustElement;
}

std::string RockyPlanet::getCoreComposition() const
{
    return coreComposition;
}

std::string RockyPlanet::explore() const
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
    information << "Planet type: "
                << planetType
                << "\n";
    information << "Dominant element in the crust: "
                << dominantCrustElement
                << "\n";
    information << "Core composition: "
                << coreComposition
                << "\n";

    return information.str();
}