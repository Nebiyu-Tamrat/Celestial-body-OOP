#ifndef PLANET_H
#define PLANET_H

class Planet
{
private:
    double distanceFromSun;
    double gravity;
    bool hasWater;

public:
    Planet(
        double distanceFromSun,
        double gravity,
        bool hasWater
    );

    double getDistanceFromSun() const;
    double getGravity() const;
    bool getHasWater() const;

    virtual ~Planet() = default;
};

#endif