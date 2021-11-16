#include <iostream>
#include <string>

using namespace std;

int main()
{

    // void print(ostream & outF);

    // void print(ostream & outF)
    // {
    //     outF << left;
    //     outF << setw(20) << courseNo << "   ";
    //     outF << setw(20) << courseName;
    //     outF << right;
    //     outF << setw(20) << courseCredits << "   ";
    // }

    class animalType()
    {
    public:
        int weight;
        int heightLength;
        string habitat = {"TROPICAL", "DRY", "TEMPERATE", "CONTINENTAL", "POLAR"};
        string category = {"MAMMAL",
                           "BIRD",
                           "FISH",
                           "REPTILE",
                           "AMPHIBIAN",
                           "INSECT"};

        class mammalType()
        {
        public:
            int legs;
            bool subterranean;
            string footType = {"HOOF",
                               "PAW",
                               "FIN"};

            class lion()
            {
                legs = 4;
                subterranean = false;
                footType = "PAW";
            }

            class blueWhale()
            {
                legs = 0;
                subterranean = false;
                footType = "FIN";
            }

            class ram()
            {
                legs = 4;
                subterranean = false;
                footType = "HOOF";
            }
        }

        class birdType()
        {
        public:
            bool flight;
            bool aquatic;
            bool migratory;

            class canadaGoose()
            {
                flight = true;
                aquatic = true;
                migratory = true;
            }

            class emu()
            {
                flight = false;
                aquatic = false;
                migratory = false;
            }

            class emperorPenguin()
            {
                flight = false;
                aquatic = true;
                migratory = true;
            }
        }

        class fishType()
        {
        public:
            string waterType = {"SALT",
                                "FRESH",
                                "BRACKISH",
                                "AOTA"}; //<< AOTA = ALL OF THE ABOVE

            class trout()
            {
                waterType = "FRESH"
            }

            class whaleShark()
            {
                waterType = "SALT"
            }

            class sockeyeSalmon()
            {
                waterType = "AOTA"
            }
        }

        class reptileType()
        {
        public:
            bool eggBirth;
            bool venomous;
        }

        class iguana() {}
        class easternRattlesnake() {}
        class komodoDragon() {}

        class amphibianType()
        {
        public:
            bool aquatic;
            bool internalEggs;
            bool venomous;
            string order = {"FROGTOADS",
                            "CAECILIANS",
                            "SALAMANDERNEWTS"};

            class hellbender()
            {
                aquatic = true;
                internalEggs = false;
                venomous = false;
                order = "SALAMADERNEWTS"
            }
            class ringedCaecilian()
            {
                aquatic = false;
                internalEggs = false;
                venomous = true;
                order = "CAECILIANS"
            }

            class surinameToad()
            {
                aquatic = true;
                internalEggs = true;
                venomous = false;
                order = "FROGTOADS"
            }
        }

        class insectType()
        {
        public:
            bool flight;
            bool aquatic;
            bool subterranean;

            class goliathBeetle()
            {
                flight = true;
                aquatic = false;
                subterranean = false;
            }

            class dragonFly()
            {
                flight = true;
                aquatic = true;
                subterranean = false;
            }

            class yellowJacket()
            {
                flight = true;
                aquatic = false;
                subterranean = true;
            };
        };
    };
}