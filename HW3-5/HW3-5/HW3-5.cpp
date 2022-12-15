// HW3-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "HW3-5.h"

int main() {
    
    map<string, string> stateDataMap;// initializes map container
   
    stateDataMap["Nebraska"] = "Lincoln";// loads state and capital values
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";
    
    print_map(stateDataMap); //outputs map data
   
    stateDataMap["California"] = "Los Angeles"; // changes 

    string state;
    cout << "Enter state name: ";
    getline(cin, state); //input desired state
    print_capital(stateDataMap, state); // calls print_capital function to print the capital of the input state
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
