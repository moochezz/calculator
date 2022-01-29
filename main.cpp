#include<iostream>
using namespace std;

int numcount; 

int* getnum() //return type- address of integer array
{
    cout << "how many numbers would you like?\n";
    cin >> numcount;
    
    int arr[numcount];

    // for loop that asks the usser which number they would like to use in the operation based on numcount
    for(int i = 0; i<numcount; i++)
    {
        cout << "num?\n";
        cin >> arr[i];
    }
    
    return arr; //returning the address of the array holding the numbers
}
 
int main()
{
    int op; // the variable which holds the operation the user would like 
    int i; // variable that will be used inside of a for loop; will be explained later as to why we're using this
    int num = 0; // the initial number that will be added to once we start the math

    cout << "What operation would you like to do?";
    cin >> op; // sends the result of the user input to the operation variable
    
    int* ptr; //pointer to hold address
    ptr = getnum(); //address of the array
    
    
    // now we do the actual math
    if(op == 1){ // addition
        for(i = 0; i<numcount; i++){
            num = num+ptr[i];
         }
    } 
    
    else if(op == 2){ // subtraction
        for(i = 0; i<numcount; i++){

            if (i == 0){
               num = ptr[0]; // checks if this is the first number we're using, and if so, makes that the number variable (we dont wanna subtract from zero)
            } 
            

            else{
            num = num-ptr[i]; // if it isnt the first number, simply subtract
            }

         }
    }
    cout << "The result is " << num; // finally, prints out the answer
}