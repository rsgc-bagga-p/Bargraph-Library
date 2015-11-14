/*
 * Bargraph Library Example
 * Created By Puneet Singh Bagga 
 * Date Created: November 13th,2015
 */
#include <BargraphPB.h>// Includes the bargraph library so we can use it
int barPins[] = {2,3,4,5,6,7}; // this is an array that will hold all of our pin numbers 
                               // I am only using 6 pins so the array will only hold six values
BargraphPB barGraph(barPins,6);// creates an instance of class bargraph
                               // the first number is our pin numbers and the second is the amount
                               // of led's we are using on the graph, this function already 
                               // assigns the pins as outputs
void setup() {
  // Nothing to do here...everything is initialized already
}

void loop() {
  // here we will use the functions in the library

   // The first function turns a certain amount of led's on 
   barGraph.value(3); // The number inputed here will be represented on the bargrah
   // The second function runs up to a certain number and back down on the bargraph
   delay(2000); //delays the next function by 2 seconds
   barGraph.count(3); // The number inputed here will be represented on the bargraph
   // The third function is a dot test, its like the count function but instead it lights one bar at a time
   barGraph.dotTest(3); // The number inputed here will be represented on the bargraph
   delay(2000); //delays the next function by 2 seconds
   // The last function is the number to binary function, input a number in and a binary output will show on the graph
   // The number must be between 2^0 to 2^the amount of bar led's that are live
   barGraph.binary(5); // The number inputed here is represented on the bargraph as a binary value
   delay(2000); //delays the next function by 2 seconds
}
