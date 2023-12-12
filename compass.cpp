// question 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>



int main() {
    int angle;
    using namespace std;
    cout << "Enter the angle in degrees between 0 and 360 I will tell you what direction on a compass it would be" <<endl <<"(N, NE, E, SE, S, SW, W, NW): ";
    cin >> angle;

    if (angle < 0 || angle > 360) {
        cout << "Invalid input. Please enter a number between 0 and 360." << endl;
        return 0;
    }

    if (angle >= 338 || angle < 23) {
        cout << "N" << endl;
    }
    else if (angle < 68) {
        cout << "NE" << endl;
    }
    else if (angle < 113) {
        cout << "E" << endl;
    }
    else if (angle < 158) {
        cout << "SE" << endl;
    }
    else if (angle < 203) {
        cout << "S" << endl;
    }
    else if (angle < 248) {
        cout << "SW" << endl;
    }
    else if (angle < 293) {
        cout << "W" << endl;
    }
    else {
        cout << "NW" << endl;
    }

    return 0;
}