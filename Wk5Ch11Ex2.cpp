

// Author: Clint Kline
// Filename: Wk5Ch11Ex2.cpp
//

#include <iostream>
#include <string>

using namespace std;

class animalType
{
public:
    int weight;
    int heightLength;
    char sex[2] = {'m', 'f'};
    string habitat[5] = {"TROPICAL", "DRY", "TEMPERATE", "CONTINENTAL", "POLAR"};
    string category[6] = {"MAMMAL",
                          "BIRD",
                          "FISH",
                          "REPTILE",
                          "AMPHIBIAN",
                          "INSECT"};

    class mammalType
    {
    public:
        int legs;
        bool subterranean;
        string footType[3] = {"HOOF",
                              "PAW",
                              "FIN"};

        class lion
        {
            bool mature;
        };

        class blueWhale
        {
            bool previouslyUntagged;
        };

        class ram
        {
            double hornSpread;
        };
    };

    class birdType
    {
    public:
        bool flight;
        bool aquatic;
        bool migratory;

        class canadaGoose
        {
            bool transcontinental;
        };

        class africanOstrich
        {
            bool somali;
        };

        class emperorPenguin
        {
            bool parent;
        };
    };

    class fishType
    {
    public:
        string waterType[4] = {"SALT",
                               "FRESH",
                               "BRACKISH",
                               "AOTA"}; //<< AOTA = ALL OF THE ABOVE

        class trout
        {
            bool native;
        };

        class whaleShark
        {
            bool symbiotic;
        };

        class sockeyeSalmon
        {
            bool mature;
        };
    };

    class reptileType
    {
    public:
        bool eggBirth;
        bool venomous;

        class skink
        {
            bool limbed;
        };

        class timberRattlesnake
        {
            bool possibleCanebreak;
        };

        class komodoDragon
        {
            string island[4] = {"KOMODO", "RINCA", "FLORES", "GILIMOTANG"};
        };
    };

    class amphibianType
    {
    public:
        bool aquatic;
        bool internalEggs;
        bool venomous;
        string order[3] = {"FROGTOADS",
                           "CAECILIANS",
                           "SALAMANDERNEWTS"};

        class hellbender
        {
            bool mature;
        };

        class Caecilian
        {
            bool venomous;
        };

        class surinameToad
        {
            bool pregnant;
        };
    };

    class insectType
    {
    public:
        bool flight;
        bool aquatic;
        bool subterranean;

        class goliathBeetle
        {
            string stage[3] = {"LARVAL", "PUPAL", "MATURE"};
        };

        class dragonFly
        {
            double wingspan = 0.0;
        };

        class yellowJacket
        {
            bool queen;
        };
    };
};
