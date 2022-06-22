// SkyNet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
 Skynet HK-Aerial
 Isaiah Marin
 CSC215
 June 15, 2022
*/

// Including standard libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

// Including std namespace
using namespace std;

// Main function
int main()
{
    // Seeding the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // the random number
    int enemyLocation = rand() % 64 + 1;

    // How many tries it takes
    int tries = 0;

    
    cout << "Initializing enemy placement on an 8 x 8 grid...\n" "Enemy is located at gridspace # " << enemyLocation << "\n\n";

    // Grid high number
    int searchGridHighNumber = 64;

    // Grid low number
    int searchGridLowNumber = 1;

    // Binary search algorithm
    int targetLocationPrediction = 0;

    do
    {
        
        cout << "Initialization of Skynet HK-Aerial software commencing...\n";

        // Binary search algorithm
        int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

        // Adds how many tries it takes
        ++tries;

        // If statement regarding the greater than status of the target location prediction
        if (targetLocationPrediction > enemyLocation)
        {
            // Re-initializing the high number within the binary search algorithm
            searchGridHighNumber = targetLocationPrediction;

            
            cout << "Analyzation resulted in a search of gridspace # " << targetLocationPrediction << " . This gridspace is a higher number than the enemy's location. \nCommencing another analyzation...\n ------------------" << endl;
        }

        // Else if statement regarding the less than status of the target location prediction
        else if (targetLocationPrediction < enemyLocation)
        {
            // Re-initializing the low number within the binary search algorithm
            searchGridLowNumber = targetLocationPrediction;

           
            cout << "Analyzation resulted in a search of gridspace # " << targetLocationPrediction << " . This gridspace is a lower number than the enemy's location. \nCommencing another analyzation...\n ------------------" << endl;
        }

        // Else statement regarding successful enemy location
        else
        {
            
            cout << "Analyzation resulted in a search of gridspace # " << targetLocationPrediction << "\nThe enemy was located at gridspace # " << targetLocationPrediction << "\nIt took Skynet HK-Aerial approximately " << tries << " analyzation sequences to find the enemy within the grid.\n\n" << endl;

            // Break statement to exit do loop
            break;
        }
    }

    // While loop to re-initialize do loop
    while (targetLocationPrediction != enemyLocation);


    // Return function to ensure program success
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
