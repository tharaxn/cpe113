/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : ArrayStack Testing
 **********************************************/

#include <iostream>
#include "ArrayStack.h"

using namespace std;

int main()
{
    ArrayStck stack;
    int choice, element, index;
    do
    {
        cout << "--------current list status---------" << endl;
        stack.display();

        cout << "--- Menu --------------------------" << endl;
        cout << " 1: push element" << endl;
        cout << " 2: pop element" << endl;
        cout << " 3: top element" << endl;
        cout << " 7: clear stack" << endl;
        cout << "0: exit" << endl;
        cout << "==================================================" << endl;

        cout << "Enter your choice:";
        cin >> choice;

        cout << "==================================================" << endl;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "Enter element:";
            cin >> element;
            stack.push(element);
            break;

        case 2:
            element = stack.pop();
            cout << "Element is" << element << endl;
            break;

        case 3:
        element = stack.top(); 
            cout << "element:" << element << endl; 
            break;
        case 7:
            stack.clear();
            cout << "Stack is cleared" << endl;
            break;
        case 0:
            cout << "Bye..." << endl;
            break;

        default:
            cout << "worng choice , try Agatn" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}