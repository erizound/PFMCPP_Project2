#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

    Integer
    Character
    Boolean
    Floating Point
    Double Floating Point
    Valueless or Void

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    //Integer
    int val = 1;
    //Character
    char letter = 'H';
    //Boolean
    bool power = true;
    //Floating Point
    float fraction = 1.5f;
    //Double Floating Point
    double precision = 32.1572;

    ignoreUnused(number,val,letter,power,fraction,precision); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int milesTraveled(int startingPoint=0, int endingPoint = 10 )
{ 
    ignoreUnused(startingPoint, endingPoint);
    return {};
} 
/*
 2)
 */
bool obsoleteCar(bool mechanicalProblem = false, int yearsInService = 1, bool outOfService= true)
{ 
    ignoreUnused(mechanicalProblem, yearsInService,outOfService);
    return {};
}
/*
 3)
 */
void displayValue(int sampleRate, bool labelAxis = true, float input = 0.0f)
{ 
    ignoreUnused(sampleRate, labelAxis, input);
}
/*
 4)
 */
float calculateDivision(float nominator = 1.0f, float denominator = 1.0f )
{ 
    ignoreUnused(nominator, denominator);
    return{};
}
/*
 5)
 */
int signalsDuration(int numSamples = 44100, int sampleRate = 48000)
{ 
    ignoreUnused(numSamples, sampleRate);
    return{};
}
/*
 6)
 */
bool clippedValue(float value = 1.1f, int reference = 1, bool decibels = true)
{
    ignoreUnused(value, reference,decibels);
    return{};
}
/*
 7)
 */
void changeCharacter(char character1= 'A', char character2 = 'B', char character3 = 'C', bool notCharacter = false)
{
    ignoreUnused(character1,character2,character3,notCharacter);
}
/*
 8)
 */
void stressTest(float currentCpuSpeed = 4.0f, float targetSpeed = 4.5f, int temperature = 65)
{
    ignoreUnused(currentCpuSpeed,targetSpeed,temperature);
}
/*
 9)
 */
int connectionSpeed(bool isConnected = true, int currentUpload = 400, int currentDownload = 40)
{
    ignoreUnused(isConnected,currentUpload, currentDownload);
    return{};
}
/*
 10)
 */
float addNumbers(float num1 = 10.1f, float num2 = 50.2f, bool moreNumbers = false)
{
    ignoreUnused(num1,num2,moreNumbers);
    return{};
}
int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto tripA = milesTraveled(2, 3);
    //2)
    auto oldFord = obsoleteCar(false, 10, true);
    //3)
    displayValue(44100, false, 1.1f);
    //4)
    auto divResult = calculateDivision(325.256f, -89.56f);
    //5)
    auto defaultDurationInSec = signalsDuration();
    //6)
    auto clippingIndicator = clippedValue(5.8f, 0, false);
    //7)
    changeCharacter('D', 'M', 'R', false);
    //8)
    stressTest(2.5f, 3.0f, 60);
    //9)
    auto internetSpeed = connectionSpeed(false, 0, 0);
    //10)
    auto sumResult = addNumbers(15.3f, 56.9f, true);
    
    ignoreUnused(tripA,carRented,oldFord,divResult,defaultDurationInSec,clippingIndicator,internetSpeed,sumResult);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
