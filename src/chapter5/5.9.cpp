#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

unsigned int PRNG() //난수를 만드는 원리는 이런식임
{
    static unsigned int seed = 5523;
    seed = 8253729 * seed + 239603;
    return seed % 32768;

}

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max-min + 1) * (std::rand() *fraction));

}


int main()
{
    cout << PRNG() << endl;
    cout << " "<< endl;

    //std::srand(5323); // 디버깅할떄는 이렇게 시드를 고정시켜놓고 하는편임
    std::srand(static_cast<unsigned int>(std::time(0)));
    cout << std::rand() << endl;
    cout << getRandomNumber(5,8) << endl;
    cout << " "<< endl;

    //////////////////////////////////////////////////////////////////
    std::random_device rd;
    std:: mt19937 mersenne(rd());
    std::uniform_int_distribution<> dice(1,6);

    cout << dice(mersenne) << endl;
    return 0;
}