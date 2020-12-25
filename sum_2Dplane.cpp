// A point on the two dimensional plane can be represented by two numbers: an X coordinate and a Y coordinate.
// For example, (4,5) represents a point 4 units to the right of the origin along the X axis and 5 units up the Y axis.
// The sum of two points can be defined as a new point whose X coordinate is the sum of the X coordinates of the points and whose Y coordinate is the sum of their Y coordinates.
// Write a program that uses a structure called point to model a point.
// Define three points, and have the user input values to two of them.
// Then set the third point equal to the sum of the other two, and display the value of the new point.
// Interaction with the program might look like this:
// Enter coordinates for P1: 3 4
// Enter coordinates for P2: 5 7
// Coordinates of P1 + P2 are : 8, 11



#include<iostream>
using namespace std;
struct cord                                //Structure for the coordinates
{int xcord;
int ycord;
}p,q,r;                                     //Objects of coordinates
int main()
{cord p;
std::cout<<"Enter the coordinates of P1:";
std::cin>>p.xcord>>p.ycord;
cord q;
std::cout<<"Enter the coordinates of P2:";
std::cin>>q.xcord>>q.ycord;
cord r;
r.xcord=p.xcord+q.xcord;
r.ycord=p.ycord+q.ycord;
std::cout<<"\nCoordinates of P1+P2:"<<r.xcord<<","<<r.ycord;             //sum of coordinates
return 0; 
}
