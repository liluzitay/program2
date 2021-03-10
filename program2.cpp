#include <iostream>
using namespace std;
/* Taylor Wedding
CS215-19Z1
Spring 2021
Programming Assignment #2

The following program will ask the user to input an ordered pair of integers,
each between 2 and 5000. Then, for each integer of the pair, it should display 
that integer's factors (greater than 1) that are themselves squares, and also 
display whether or not that integer is square-free. Finally, it should display
whether this ordered pair of integers is SWEET, SOUR, SALTY, or BITTER.
*/
// prototypes
void conclusionaryOutput(int, int, bool, bool);
void listSquares(int, int);
void squareInquiry(int, int);

int main(){

    int firstInt;
    int secondInt;
    cout << "Enter the 1st integer of the pair, between 2 and 5000: ";
    cin >> firstInt;
    while(firstInt < 2 || firstInt > 5000){
        cout << "Invalid entry, Please try again: ";
        cin >> firstInt;
    }
    cout << "Enter the 2nd integer of the pair, between 2 and 5000: ";
    cin >> secondInt;
    while(secondInt <2 || secondInt > 5000){
        cout << "Invalid entry, Please try again: ";
        cin >> secondInt;
    }
    squareInquiry(firstInt, secondInt);
return 0;
}



void conclusionaryOutput(int number1, int number2, bool containSquareFactor1, bool containSquareFactor2){
    if(containSquareFactor1 == false && containSquareFactor2 == false){
        cout << "Therefore the ordered pair (" << number1 << "," << number2 << ") is SWEET." << endl;
    }
    else if(containSquareFactor1 == false && containSquareFactor2 == false){
        cout << "Therefore the ordered pair (" << number1 << "," << number2 << ") is SOUR." << endl;
    }
    else if(containSquareFactor1 == true && containSquareFactor2 == false){
        cout << "Therefore the ordered pair (" << number1 << "," << number2 << ") is SALTY." << endl;
    }
    else{
        cout << "Therefore the ordered pair (" << number1 << "," << number2 << ") is BITTER." << endl;
    }
}
void listSquares(int listOfSquares[], int numOfSquares, int divisor){
    if (numOfSquares !=1){
    for(int index=0; index < numOfSquares; index++){
      cout << divisor << " , ";
    }
    cout << "\n";
}
}



void squareInquiry(int number1, int number2){
    bool containSquareFactor1;
    bool containSquareFactor2;
    int counter;
    int listOfSquares[70];
    int divisor;
    int numOfSquares=0;
    int index=0;
    counter  = 2; 
    while (counter <= 70){
        divisor = counter * counter;
        if (number1 % divisor == 0){
            numOfSquares++;
            listOfSquares[index]=counter;
            index++;
            //listSquares(divisor, numOfSquares);
        }
    counter++;
    }
    if (numOfSquares > 0){
        cout << number1 << " has these factors (>1) that are square: ";
        listSquares(divisor, numOfSquares);
        cout << number1 << " is not square-free" << endl;
        containSquareFactor1 = true;
    }
    else{
        cout << number1 << " has these factors (>1) that are square: (none) " << endl;
        cout << number1 << " is square-free" << endl;
        containSquareFactor1= false;
    }
    
    counter =2;
    numOfSquares =0;
    index=0;
    while(counter <=70){
        divisor = counter * counter;
        if (number2 % divisor == 0){
            numOfSquares++;
            listOfSquares[index]=counter;
            index++;
            //listSquares(divisor, numOfSquares);
        }
        counter++;
    }
    if(numOfSquares > 0){
        //listSquares(divisor, numOfSquares);
        cout << number1 << " has these factors (>1) that are square: ";
        listSquares(divisor,numOfSquares);
        cout << number2 << " is not square-free" << endl;
        containSquareFactor2 = true;
    }
    else{
        cout << number2 << " has these factors (>1) that are square: (none) " << endl;
        cout << number2 << " is square-free" << endl;
        containSquareFactor2= false;
    }
  conclusionaryOutput(number1, number2,containSquareFactor1, containSquareFactor2);
}  
