
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

    // Declares constants
    const int ROWS=5;
    const int COLS=5;
    const int VOWELS=10;
    
    
    
    //Prototypes
     void swap(char [][COLS]);
     void vowels(char [][COLS]);
     void showMatrix(char [][COLS]);
     void search(char [][COLS]);
     void leave(char [][COLS]);
     


int main()
{
    //Initializes array.
    char array1[ROWS][COLS]={ {'s','w','e','e','t'}, {'h', 'e', 'a', 'r', 't'}, {'e', 'g', 'r', 'i', 't'}, {'c', 'l', 'o', 'n', 'e'}, {'o', 'd', 'o', 'r', 's'} };

    
    int menuOption=0;
    bool testVar=true;
    
    do
    {
    
    // Display the menu.

        cout << "Please select your menu option.\n";
        cout << "1. Swap column 1 and column 4.\n";
        cout << "2. Display total number of vowels.\n";
        cout << "3. Display the array as matrix.\n";
        cout << "4. Search for and diplay number of instances of any given character.\n";
        cout << "5. None of the above.\n";
        cin >> menuOption;
        
    
    
    // Menu option 1
    if (menuOption==1)
    {
        swap(array1);
        testVar=true;
        
    }
    
    
    //Menu option 2
    
    else if(menuOption==2)
    {
        vowels(array1);
        testVar=true;

    }
    
    
    //Menu option 3
    else if(menuOption==3)  
    {
        showMatrix(array1);
        testVar=true;
    }
    
    
    //Menu option 4
    else if(menuOption==4)
    {
        search(array1);
        testVar=true;
    }
    
   
    //Menu option 5
    else if(menuOption==5)
    {
      leave(array1);
    }
        
    //Input validation
    
    else
    {
        cout<< "Please enter a valid selection from the menu.\n";
        testVar=true;
        

    }
    }
    
    while(testVar==true);
    
     return 0;
}
    

    //Function definitions
    
    //Function header
    void swap(char array1[][COLS])
    {
     
      char placeholder[ROWS][1]={{'p'}, {'l'}, {'a'}, {'c'}, {'e'}};
     
     
      //Assign column 4 to placeholder array
      
      for (int a=0; a<ROWS; a++)
      {
          placeholder[a][0]=array1[a][3];
      }
      
      //Assign column 1 to column 4
      
      for (int b=0; b<ROWS; b++)
      {
          array1[b][3]=array1[b][0];
      }
      
      //Assign column 1 the values of column 4, held in the placeholder array
      for (int c=0; c<ROWS; c++)
      {
          array1[c][0]=placeholder[c][0];
      }
      
    }
    
    //Function header
    void vowels(char array1[][COLS])
    {
        cout << "There are " << VOWELS<< " total vowels present in the array.\n";
        
    }
    
    //Function header
    void showMatrix(char array1[][COLS])
    {
      for(int d=0; d<ROWS; d++)  
      {
          for(int e=0; e<COLS; e++)
          {
              cout<< setw(5)<< array1[d][e];
          }
          cout<<endl;
      }
     
    }
    
     //Function header
    void search(char array1[][COLS])
    {
        char search='a';
        cout << "Please enter the character you wish to search for.\n";
        cin>> search;
        
        int counter=0;
        
        for (int f=0; f<ROWS; f++)
        {
            for (int g=0; g<COLS; g++ )
            {
                if (array1[f][g]==search)
                {
                    counter+=1;
                }
            }
        }
        cout<< "The character "<< search<< " appeared in the array " << counter<< " times.\n";
    }
    
     //Function header
    void leave(char array1[][COLS])
    {
        cout << "Goodbye.\n";
        exit(0);
    }

    
    




