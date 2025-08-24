#include <iostream>
//this program will model how far a ball drops in X seconds from a height of Y meters
//gravity is 9.8m/s^2

double getDistanceFallen(double seconds) 
{
    const double GRAVITY = 9.8;
    double distanceFallen{(GRAVITY * (seconds*seconds))/2.0};
    return distanceFallen;
    
}

int main()
{

    double height{};
    std::cout << "Input the height of the tower in meters\n";
    std::cin >> height;

    double seconds{};
    std::cout << "Input the seconds it falls for\n";
    std::cin >> seconds;

    std::cout << "At " << seconds << " seconds the ball is at " <<
        height - getDistanceFallen(seconds) << " meters";

    return 0;
}

