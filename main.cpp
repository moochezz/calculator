#include <iostream>
#include <string>
using namespace std;

int numcount; 
int* getnum() //return type- address of integer array
{
    string op_str1;
    int op_int;
    int op;
    if (op == 1)
    {
    op_str1 = "add";
    }
    if (op == 2)
    {
    op_str1 = "subtract";
    }
    cout << "How many numbers would you like?\n";
    cin >> numcount;
    
    int arr[numcount];

    // for loop that asks the usser which number they would like to use in the operation based on numcount
    for(int i = 0; i<numcount; i++)
    {
        if (i == 0)
        {
            cout << "What is your starting number?\n";
            cin >> arr[i];
        }
        if (i > 0)
        {
            cout << "What would you like to " << op_str1 << "?\n";
            cin >> arr[i];
        }
    }
    
    return arr; //returning the address of the array holding the numbers
}
int main()
{
    int op; // the variable which holds the operation the user would like 
    int i; // variable that will be used inside of a for loop; will be explained later as to why we're using this
    int num = 0; // the initial number that will be added to once we start the math

    cout << "\n Welcome to the C++ scientific calculator! What operation would you like to complete (Choose corresponding number)? \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. x^2 \n 6. x^3 \n 7. sqrt \n 8. cbrt \n 9. x^y \n 10. SA of rect prism \n 11. V of rect prism \n 12. SA of prism \n 13. V of prism \n 14. SA of pyramid \n 15. V of pyramid \n";
    cin >> op; // sends the result of the user input to the operation variable
    
    int* ptr; //pointer to hold address
    ptr = getnum(); //address of the array
    
    
    // now we do the actual math
    if(op == 1) // addition
    { 
        for(i = 0; i<numcount; i++)
        {
            num = num+ptr[i];
        }
    } 
    
    if (op == 2) // subtraction
    {
        for(i = 0; i<numcount; i++)
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
    
    if (op == 3) // multiplication
    { 
        for(i = 0; i<numcount; i++)
        {
            num = num*ptr[i];
        }
    }
    if (op == 4) // multiplication
    { 
        for(i = 0; i<numcount; i++)
        {
            num = num/ptr[i];
        }
    }
    if (op == 5) // multiplication
    { 
        for(i = 0; i<numcount; i++)
        {
            num = num*num;
        }
    }
            
    
    cout << "The result is " << num; // finally, prints out the answer
}