#include "GasRingPlanet.h"

#include <sstream>

GasRingPlanet::GasRingPlanet(
    const std::string& name,
    double equator,
    double distanceFromSun,
    double gravity,
    bool hasWater,
    const std::string& dominantGas,
    const std::string& planetType,
    int numberOfRings
)
    : GasGiant(
          name,
          equator,
          distanceFromSun,
          gravity,
          hasWater,
          dominantGas,
          planetType
      ),
      numberOfRings(numberOfRings)
{
}

int GasRingPlanet::getNumberOfRings() const
{
    return numberOfRings;
}

std::string GasRingPlanet::explore() const
{
    std::ostringstream information;

    information << GasGiant::explore();
    information << "Number of rings: "
                << numberOfRings
                << "\n";

    return information.str();
}