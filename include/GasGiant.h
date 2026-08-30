#ifndef GASGIANT_H
#define GASGIANT_H

#include "CelestialBody.h"
#include "Planet.h"
#include "Explorer.h"

#include <string>

class GasGiant : public CelestialBody,
                 public Planet,
                 public Explorer
{
private:
    std::string dominantGas;
    std::string planetType;

public:
    GasGiant(
        const std::string& name,
        double equator,
        double distanceFromSun,
        double gravity,
        bool hasWater,
        const std::string& dominantGas,
        const std::string& planetType
    );

    std::string getDominantGas() const;
    std::string getPlanetType() const;

    std::string explore() const override;

    virtual ~GasGiant() = default;
};

#endif