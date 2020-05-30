#include <iostream>

#include <string>
#include <random>
#include <ctime>
using namespace std;
int main()
{
    default_random_engine randomGenerator(time(0));
    uniform_int_distribution<int> diceRoll(1,9);

    cout<<"First roll is  " <<diceRoll(randomGenerator)<<endl;
    cout<<"Second roll is  " <<diceRoll(randomGenerator)<<endl;
    cout<<"Third roll is  " <<diceRoll(randomGenerator)<<endl;

    system("PAUSE");
    return 0;

}
