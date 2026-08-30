#ifndef GASRINGPLANET_H
#define GASRINGPLANET_H

#include "GasGiant.h"

class GasRingPlanet : public GasGiant
{
private:
    int numberOfRings;

public:
    GasRingPlanet(
        const std::string& name,
        double equator,
        double distanceFromSun,
        double gravity,
        bool hasWater,
        const std::string& dominantGas,
        const std::string& planetType,
        int numberOfRings
    );

    int getNumberOfRings() const;

    std::string explore() const override;

    ~GasRingPlanet() override = default;
};

#endif