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
    bool isValidHeight{ false };

    while (!isValidHeight) {
        std::cout << "Input the height of the tower in meters\n";
        std::cin >> height;
        if (height <= 0)
            std::cout << "Cant have a negative or 0 height!! \n";
        else
            isValidHeight = true;
    }

    double seconds{};
    bool isValidTime{ false };
    
    while (!isValidTime) {
        std::cout << "Input the seconds it falls for\n";
        std::cin >> seconds;
        if (seconds < 0)
            std::cout << "Cant fall for negative seconds!! \n";
        else
            isValidTime = true;
    }
    

    int i{ 0 };
    while (i <= seconds) 
    {
        if (height - getDistanceFallen(i) <= 0) //calculate displacement
        {
            std::cout << "At "<< i << " seconds the ball is on the ground\n";
            break;
        }
        else
        {
            std::cout << "At " << i << " seconds the ball is at " <<
                height - getDistanceFallen(i) << " meters\n";
            i++;
        }
    }

    return 0;
}

