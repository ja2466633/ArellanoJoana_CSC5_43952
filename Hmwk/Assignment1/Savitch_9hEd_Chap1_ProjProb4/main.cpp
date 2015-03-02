/*
* File: main.cpp
* Author:Joana Arellano
* Created on March 2, 2015, 9:07 AM
* Purpose: Solution to free fall problem
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=3.2174e1f;// Acceleration in ft/sec^2
const float CNVFTMT=3.048e-1f;//Conversion from feet to meters

//Functions Prototypes

//Executions Begins Here!
int main(int argc, char** argv)
{
    //Declare variables
    unsigned int time;//(secs)
    float dstnce,dstnceM;//distance (ft)
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds) "<<endl;
    cin>>time;
    //Calculate the distance
    dstnce=1.0f/2*G*time*time;
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1/2.0f*G*time*time;
    //dstnce=G*time*time/2;
    //dstnce=0.5f*G*time*time;
    //dstnce=5e-1f*G*time*time;
    //Output the results
    cout<<"Distance fallen = "<<dstnce<<" (feet) "<<endl;
    dstnceM=dstnce*CNVFTMT;
    cout<<"Distance fallen = "<<dstnceM<<"(meters)"<<endl;
    //Exit stage right
    return 0;
    }