#include <iostream>
#include <string>
#include <cmath> // library used for math function such as square root, cube root, and power


using namespace std;

int numcount; 
int* getnum() //return type- address of integer array
{
    int op_int;
    int op;

    cout << "How many numbers would you like?\n";
    cin >> numcount;
    
    int arr[numcount];

    // for loop that asks the user which number they would like to use in the operation based on numcount
    for(int i = 0; i<numcount; i++)
    {
        if (i == 0)
        {
            cout << "What is your starting number?\n";
            cin >> arr[i];
        }
        if (i > 0)
        {
            cout << "What is the next number?\n";
            cin >> arr[i];
        }
    }
    
    return arr; //returning the address of the array holding the numbers
}
int main()
{   
    int op; // the variable which holds the operation the user would like 
    int i;
    cout << "\n Welcome to the C++ scientific calculator! What operation would you like to complete (Choose corresponding number)? \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. x^2 (set # of numbers to 1) \n 6. x^3 (set # of numbers to 1) \n 7. sqrt (set # of numbers to 1) \n 8. cbrt (set # of numbers to 1) \n 9. x^y (set # of numbers to 2)\n 10. SA of rect prism (set # of numbers to 3 (number inputs are b, h, & l))\n 11. V of rect prism (set # of numbers to 3 (number inputs are b, h, & l))\n 12. V of Square Pyramid (set # of numbers to 2 (number inputs are b, & h)) \n";
    cin >> op; // sends the result of the user input to the operation variable
    int* numArray; //pointer to hold address
    numArray = getnum(); //address of the array
    // variable that will be used inside of a for loop; will be explained later as to why we're using this
    float num = 0; // the initial number that will be added to once we start the math
    float b = numArray[0];
    float h = numArray[1];
    float l = numArray[2];
    
    
    
    // now we do the actual math
    if(op == 1) // addition
    { 
        for(i = 0; i<numcount; i++)
        {
            num = num+numArray[i];
        }
    } 
    else if (op == 2) // subtraction
    {
        for(i = 0; i<numcount; i++)
        {

            if (i == 0)
            {
               num = numArray[0]; // checks if this is the first number we're using, and if so, makes that the number variable (we dont wanna subtract from zero)
            } 
            

            else
            {
            num = num-numArray[i]; // if it isnt the first number, simply subtract
            }
        

         }
    
    }
    else if (op == 3) // multiplication
    {
        for(i = 0; i<numcount; i++)
        {

            if (i == 0)
            {
               num = numArray[0]; // checks if this is the first number we're using, and if so, makes that the number variable
            } 
            

            else
            {
            num = num*numArray[i]; // if it isnt the first number, multiply
            }
        

         }
    
    }
    else if (op == 4) // division
    {
        for(i = 0; i<numcount; i++)
        {

            if (i == 0)
            {
               num = numArray[0];
            } 
            

            else
            {
            num = num/numArray[i];
            }
        

         }
    
    }
    else if (op == 5) // squared
    {
        num = pow(numArray[0], 2); // the function pow is a part of the "cmath" library, short form for power; the first argument is the base, the second number is the exponent
    }
    else if(op == 6){ // cubed
        num = pow(numArray[0], 3);
    }
    else if(op == 7){ // square root
        num = sqrt(numArray[0]);
    }
    else if(op == 8){ // cube root
        num = cbrt(numArray[0]);
    }
    else if(op == 9){
        num = pow(numArray[0], numArray[1]);
    }
    else if(op == 10){
        num = b*h*2+b*l*2+h*l*2;
    }
    else if(op == 11){
        num = b*h*l;
    }
    else if(op == 12){
        num = b*h/3;
    }
   
    cout << "The result is " << num; // finally, prints out the answer
}
