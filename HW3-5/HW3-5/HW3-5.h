#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

void print_map(map<string, string> stateDataMap) { // prints contents of map container 1x1
    for (map<string, string>::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++) {
        cout << "State: " << it->first << ", Capital: " << it->second << endl;
    }
}

void print_capital(map<string, string> stateDataMap, string state) { // prints capital of the input state 
    map<string, string>::iterator it = stateDataMap.find(state);
    if (it == stateDataMap.end()) {
        cout << state << " is not found" << endl; // if input state is not found in map
    }
    else {
        cout << "Capital of " << state << " is " << it->second << endl;
    }
}