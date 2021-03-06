#include <iostream> 
#include <string>
#include <cmath> // library used for math function such as square root, cube root, and power


using namespace std;

int numCount; // the variable that is gonna be used for how many number the user wants.
int* getnum() // this asterisk basically means that we are returning something called an address, which is an alternate way to access a variable. 
{

    cout << "How many numbers would you like?\n";
    cin >> numCount;
    
    int arr[numCount];

    // for loop that asks the user which number they would like to use in the operation based on numCount
    for(int i = 0; i<numCount; i++)
    {
        if (i == 0)
        {
            cout << "What is your starting number?\n";
            cin >> arr[i];
        }
        
    }
    
    return arr; //returning the address of the array holding the numbers; we use addresses due to c++ not allowing you to return arrays
}
int main()
{   
    int op; // the variable which holds the operation the user would like 
    int i; // this is the variable that is gonna be used in the for loops when we're doing the actual math
    cout << "\n Welcome to the C++ scientific calculator! What operation would you like to complete (Choose corresponding number)? \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. x^2 (set # of numbers to 1) \n 6. x^3 (set # of numbers to 1) \n 7. sqrt (set # of numbers to 1) \n 8. cbrt (set # of numbers to 1) \n 9. x^y (set # of numbers to 2)\n 10. SA of rect prism (set # of numbers to 3 (number inputs are b, h, & l))\n 11. V of rect prism (set # of numbers to 3 (number inputs are b, h, & l))\n 12. V of Square Pyramid (set # of numbers to 2 (number inputs are b, & h)) \n";
    cin >> op; // sends the result of the user input to the operation variable
    if (op > 12) 
    {
        cout << "Please enter a valid operation!";
        return 0; // if the operation number selected is greater than 12, terminate the program
    }
    int* ptr; //pointer that will point to the array we made that contain the numbers that the user chose.
    ptr = getnum(); // it now points to what the function returned, which is the address of the array
    float num = 0; // the initial number that will be added to once we start the math
    
    // the following variables will be used for the calculation of the surface area and volumes of prisms
    float b = ptr[0];
    float h = ptr[1];
    float l = ptr[2];
    
    // now we do the actual math, using if statements and for loops.
    if(op == 1) // addition
    { 
        for(i = 0; i<numCount; i++)
        {
            num = num+ptr[i];
        }
    } 
    else if (op == 2) // subtraction
    {
        for(i = 0; i<numCount; i++)
        {

            if (i == 0)
            {
               num = ptr[0]; // checks if this is the first number we're using, and if so, makes that the number variable (we dont wanna subtract from zero)
            } 
            

            else
            {
            num = num-ptr[i]; // if it isnt the first number, simply subtract
            }
        

         }
    
    }
    else if (op == 3) // multiplication
    {
        for(i = 0; i<numCount; i++)
        {

            if (i == 0)
            {
               num = ptr[0]; // checks if this is the first number we're using, and if so, makes that the number variable
            } 
            

            else
            {
            num = num*ptr[i]; // if it isnt the first number, multiply
            }
        

         }
    
    }
    else if (op == 4) // division
    {
        for(i = 0; i<numCount; i++)
        {

            if (i == 0)
            {
               num = ptr[0];
            } 
            

            else
            {
            num = num/ptr[i];
            }
        

         }
    
    }
    else if (op == 5) // squared
    {
        num = pow(ptr[0], 2); // the function pow is a part of the "cmath" library, short form for power; the first argument is the base, the second number is the exponent
    }
    else if(op == 6){ // cubed
        num = pow(ptr[0], 3);
    }
    else if(op == 7){ // square root
        num = sqrt(ptr[0]);
    }
    else if(op == 8){ // cube root
        num = cbrt(ptr[0]);
    }
    else if(op == 9){ // exponent
        num = pow(ptr[0], ptr[1]);
    }
    else if(op == 10){ // SA of rectangular prism
        num = b*h*2+b*l*2+h*l*2;
    }
    else if(op == 11){ // volume of rectangular prism
        num = b*h*l;
    }
    else if(op == 12){ // volume of square pyramid
        num = b*b*h/3; 
    }
        
   
    cout << "The result is " << num; // finally, prints out the answer
}
