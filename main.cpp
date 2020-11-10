#include <iostream>
#include "stack.cpp"
#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    Stack numStack;
    string userInput;
    double numOne;
    double numTwo;
    double numFinal;

    cout << "Enter an operation in postfix notation or stop to stop: ";
    cin >> userInput;
    cout << "\n";

    while (userInput != "stop")
    {
        if (userInput == "+")
        {
            numOne = numStack.top();
            numStack.pop();
            numTwo = numStack.top();
            numStack.pop();
            numStack.push(numOne + numTwo);
        }

        else if (userInput == "*")
        {
            numOne = numStack.top();
            numStack.pop();
            numTwo = numStack.top();
            numStack.pop();
            numStack.push(numOne * numTwo);
        }

        else if (userInput == "-")
        {
            numOne = numStack.top();
            numStack.pop();
            numTwo = numStack.top();
            numStack.pop();
            numStack.push(numTwo - numOne);
        }

        else if (userInput == "/")
        {
            numOne = numStack.top();
            numStack.pop();
            numTwo = numStack.top();
            numStack.pop();
            numStack.push(numTwo / numOne);
        }

        else if (userInput == "=")
        {
            cout << numStack.top() << "\n";
        }

        else
        {
            numFinal = stod(userInput);
            numStack.push(numFinal);
        }

        cout << "Enter an operation in postfix notation or stop to stop: ";
        cin >> userInput;
        cout << "\n";
    }
}