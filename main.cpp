/*********************************************************************/
/*                                                                   */
/*Jared Bain                                            Homework 2   */
/*CISC3110                                              Section WQ6  */
/*                                                                   */
/*********************************************************************/

#include <iostream>
#include <string>


using namespace std;

int getNumAccidents(string borough);
int findLowest(int [],const int);


int main()
{
    string borough[5] = {"The Bronx", "Queens", "Brooklyn", "Staten Island", "Manhattan"}; //Array of boroughs.
    int numaccident [5];
    const int cnt = 5;
    int lowest;



    for (int i=0;i<cnt;i++)
    {
        numaccident[i]=getNumAccidents(borough[i]);
    }
    lowest = findLowest(numaccident, cnt);
    cout << endl;
    cout << borough[lowest] << " had the fewest accidents.\n";

    cin.get();
    return 0;
}



int getNumAccidents(string borough)
{
    int numAccidents;

        cout << "Enter the number of accidents that occured in "<< borough << ": ";
        cin >> numAccidents;
        if (numAccidents<0)    //Validation of accidents.
             {
               cout << "Please enter a number grater than 0 \n";
               numAccidents=0;
               cin >> numAccidents;
                if (numAccidents<0)
                {
                 cout << "You have entered an incorrect value 2 times, please run program again \n";
                 cin.get();
                }
             }
    return numAccidents;

}

int findLowest(int numb[],const int size)
{
    int lowest=numb[0];         //Stores first number as lowest.
    int low;

    for (int i= 0; i<size; i++)
    {
        if (numb[i]<lowest)
        {
          lowest=numb[i];
          low = i;
        }
    }
    return low;
}
