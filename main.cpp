#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

float addNumbers(float firstNumber, float secondNumber)
{
    float sum = firstNumber + secondNumber;
    return sum;
}
float subNUmbers(float firstNumber, float secondNumber)
{
    float diff = firstNumber - secondNumber;
    return diff;
}
float mulNumber(float firstNumber, float secondNumber)
{
    float pro = firstNumber * secondNumber;
    return pro;
}
float ratioNumber(float firstNumber, float secondNumber)
{
    float ratio = firstNumber / secondNumber;
    return ratio;
}
float raiseTo(float firstNumber, float secondNumber){
    float raise = pow(firstNumber, secondNumber);
    return raise;
}

int main(int argc, char **argv)
{

    float firstNum;
    float secondNum;
    string operate;
    bool lives = true;
    int numAns = 9;
    int guessNo = 3;
    int taken;
    string line;

    cout << "Enter your full name: ";
    getline(cin, line);
    cout << "hello " << line << endl; 

    cout << "Enter first number: ";
    cin >> firstNum;

    cout << "Enter second number: ";
    cin >> secondNum;

    cout << "enter operation: ";
    cin >> operate;

    if (operate == "add"){
        cout << firstNum << " + " << secondNum << " = " << addNumbers(firstNum, secondNum) << endl;
    }
    if (operate == "subtract"){
        cout << firstNum << " - " << secondNum << " = " << subNUmbers(firstNum, secondNum) << endl;
    }
    if (operate == "multiply"){
        cout << firstNum << " X " << secondNum << " = " << mulNumber(firstNum, secondNum) << endl;
    }
    if (operate == "divide"){
        cout << firstNum << " / " << secondNum << " = " << ratioNumber(firstNum, secondNum) << endl;
    }
    if (operate == "raise"){
        cout << firstNum << " ^ " << secondNum << " = " << raiseTo(firstNum, secondNum) << endl;
    }

    while (guessNo>0){
        cout << "guess the number: ";
        cin >> taken;
        if (taken == numAns){
            cout << "you won" << endl;
            break;
        }
        else{
        guessNo -= 1;
        cout << "guesses left: " << guessNo << endl;
        } 
    }
    if (guessNo == 0){
        cout<<"out of guesses" << endl;
    }

    return 0;
}