/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : Sorting Test
 **********************************************/

#include <iostream>
#include "Sorting.h"

using namespace std;

int main()
{int n;
    int a;
    

    cout << " --------- SORTING --------- " << endl;
    cout << " Enter Maxsize: ";
    cin >> n;
    Sorting sort(n);
    sort.random();
    //sort.restore();

    cout << " ============================ " << endl;
    cout << endl;

    do
    {
        cout << " ---------- Manu ------------- " << endl;
        cout << " 1:SelectionSort " << endl; 
        cout << " 2:InsertionSort " << endl; 
        cout << " 3:BubbleSort " << endl;
        cout << " 4:ShellSort " << endl;
        cout << " 5:MergeSort " << endl; 
        cout << " 6:QuickSort " << endl; 
        cout << " 7:all Test " << endl;
        cout << " Enter Manu: ";
        cin >> a;

        cout << " ============================== " << endl;
        cout << endl;

        switch (a)
        {
        case 1:
            cout<<endl;    
            cout << "SelectionSort" << endl;
            cout << endl;
            sort.restore();
            sort.display();
            sort.seletion();
            sort.display();
            sort.displaySwapCouter();
            sort.displayloopCouter();
            sort.displaytime();
            cout << endl;
            break;

        case 2:
            cout<<endl; 
            cout << "InsertionSort" << endl;
            cout << endl;
            sort.restore();
            sort.display();
            sort.Insertion();
            sort.display();
            sort.displaySwapCouter();
            sort.displayloopCouter();
            sort.displaytime();
            cout << endl;
            break;

        case 3:
            cout<<endl; 
            cout << "BubbleSort" << endl;
            cout << endl;
            sort.restore();
            sort.display();
            sort.bubble();
            sort.display();
            sort.displaySwapCouter();
            sort.displayloopCouter();
            sort.displaytime();
            cout << endl;
            break;

        case 4:
            cout<<endl; 
            cout << "ShellSort" << endl;
            cout << endl;
            sort.restore();
            sort.display();
            sort.shell();
            sort.display();
            sort.displaySwapCouter();
            sort.displayloopCouter();
            sort.displaytime();
            cout << endl;
            break;

        case 5:
            cout<<endl; 
            cout << "MergeSort" << endl;
            cout << endl;
            sort.restore();
            sort.display();
            sort.merge();
            sort.display();
           sort.displaySwapCouter();
            sort.displayloopCouter();
            sort.displaytime();
            cout << endl;
            break;

        case 6:
            cout<<endl; 
            cout << "QuickSoort" << endl;
            cout << endl;
            sort.restore();
            sort.display();
            sort.quick();
            sort.display();
            sort.displaySwapCouter();
            sort.displayloopCouter();
            sort.displaytime();
            cout << endl;
            break;

        case 7:
            cout<<endl; 
            int x;
            cout << " Enter Maxsize: ";
            cin >> x;
             Sorting k(x);

            cout << " all Test " << endl;
            cout << endl;

            cout << " SeletionSort " << endl;
            k.random();
            k.restore();
            k.seletion();
            
            k.displaySwapCouter();
            k.displayloopCouter();
            k.displaytime();

            cout << endl;

            cout << " InsertionSort " << endl;
            k.restore();
            
            k.Insertion();
           
            k.displaySwapCouter();
            k.displayloopCouter();
            k.displaytime();

            cout << endl;

            cout << " BubbleSort " << endl;
            k.restore();
            
            k.bubble();
            
            k.displaySwapCouter();
            k.displayloopCouter();
            k.displaytime();

            cout << endl;

            cout << " ShellSort " << endl;
            k.restore();
            
            k.shell();
            // s.display();
            k.displaySwapCouter();
            k.displayloopCouter();
            k.displaytime();

            cout << endl;

            cout << " MergeSort " << endl;
            k.restore();
            // s.display();
            k.merge();
            // s.display();
            k.displaySwapCouter();
            k.displayloopCouter();
            k.displaytime();
            cout << endl;

            cout << " QuickSort " << endl;
            k.restore();
            //  s.display();
            k.quick();
            //  s.display();
            k.displaySwapCouter();
            k.displayloopCouter();
            k.displaytime();
            break;
        }
        }
        while (a != 0);

       
        return 0;
    }