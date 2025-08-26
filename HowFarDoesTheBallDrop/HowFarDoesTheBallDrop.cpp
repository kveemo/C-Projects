#include <iostream>
//this program will model how far a ball drops in X seconds from a height of Y meters
//gravity is 9.8m/s^2

double getInput()
{
    double input{};
    bool isValid{ false };

    while (!isValid) {
        
        std::cin >> input;
        if (input <= 0)
            std::cout << "Cant be negative or 0!! \n";
        else
            isValid = true;
    }

    return input;
}

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
    height = getInput();

    double seconds{};
    bool isValidTime{ false };
    
    std::cout << "Input the seconds it falls for\n";
    seconds = getInput();
    
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

