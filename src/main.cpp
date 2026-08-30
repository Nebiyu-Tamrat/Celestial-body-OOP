#include "GasGiant.h"
#include "RockyPlanet.h"
#include "GasRingPlanet.h"
#include "Explorer.h"

#include <iostream>
#include <vector>

int main()
{
    GasGiant neptune(
        "Neptune",
        49528,
        4495.1,
        11.15,
        false,
        "Hydrogen",
        "Ice giant"
    );

    RockyPlanet earth(
        "Earth",
        12756,
        149.6,
        9.81,
        true,
        "Oxygen",
        "Iron and nickel"
    );

    GasRingPlanet saturn(
        "Saturn",
        120536,
        1434,
        10.44,
        false,
        "Hydrogen",
        "Gas giant",
        7
    );

    std::vector<Explorer*> objects;

    objects.push_back(&neptune);
    objects.push_back(&earth);
    objects.push_back(&saturn);

    std::cout << "CELESTIAL BODY DATA MANAGEMENT SYSTEM\n";
    std::cout << "=====================================\n\n";

    for (Explorer* object : objects)
    {
        std::cout << object->explore();
        std::cout << "-------------------------------------\n";
    }

    return 0;
}