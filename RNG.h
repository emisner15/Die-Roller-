#ifndef RNG_H
#define RNG_H

#include <ctime>
#include <cstdlib>

using namespace std;

class RNG
{
private:

public:

    //by default, use current time as seed
    RNG()
    {
        srand(time(NULL));
    }

    //also allow custom seed
    RNG(int seed)
    {
        srand(seed);
    }

    //returns a number between low and high
    int generateInt(int low = 0, int high = RAND_MAX)
    {
        int next_number = rand();
        next_number = (next_number % (high + 1 - low)) + low;
    }

    // all types of possible die rolls
    int rollD4()
    {
        return generateInt(1,4);
    }

    int rollD6()
    {
        return generateInt(1, 6);
    }

    int rollD8()
    {
        return generateInt(1,8);
    }

    int rollD10()
    {
        return generateInt(1,10);
    }

    int rollD12()
    {
        return generateInt(1,12);
    }

    int rollD20()
    {
        return generateInt(1,20);
    }
};

#endif // RNG_H
