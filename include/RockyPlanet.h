#ifndef ROCKYPLANET_H
#define ROCKYPLANET_H

#include "CelestialBody.h"
#include "Planet.h"
#include "Explorer.h"

#include <string>

class RockyPlanet : public CelestialBody,
                    public Planet,
                    public Explorer
{
private:
    std::string planetType;
    std::string dominantCrustElement;
    std::string coreComposition;

public:
    RockyPlanet(
        const std::string& name,
        double equator,
        double distanceFromSun,
        double gravity,
        bool hasWater,
        const std::string& dominantCrustElement,
        const std::string& coreComposition
    );

    std::string getPlanetType() const;
    std::string getDominantCrustElement() const;
    std::string getCoreComposition() const;

    std::string explore() const override;

    ~RockyPlanet() override = default;
};

#endif