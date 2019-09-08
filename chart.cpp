// chart.cpp
// Strasser-King, Rayen
// Rfstrasser-king
#include <array>
#include <iostream>
#include <stdio.h>
using namespace std;

int biggest (int b[100], int counter)
{
        int biggest = 0;

        for (int i = 0; i < counter; i++)
        {
                if (b[i] >= biggest)
                {
                        biggest = b[i];
                }
        }
        return biggest;
}

const int MAX = 100;
int myarray[MAX][MAX];
int b[MAX];
int counter = 0;

void ex()
{
        int userinput = 0;
        for (int dimen = 0; dimen < 100; dimen++)
        {
                cin>>userinput;
                b[counter] = userinput;
                counter++;

                for ( int dimen2 = 0; dimen2 < 100; dimen2++)
                {
                        if (userinput !=0)
                        {
                                myarray[dimen][dimen2] = userinput;
                        }
                        else
                        {
                                return;
                        }
                }
        }
}
/*
void print(myarray[MAX][MAX])
{
        count = biggest;
        for (int i = 0; i < biggest(); i++)
        {
                for (int j = 0; j < myarray; j++)
                {
                        if (values[j] >= biggest)
                        {
                                cout<<"*";
                                count--;
                        }
                        cout<<endl;
                }
        }
}
*/

int main()
{
        ex();

        for ( int i = 0; i < counter; i++)
        {
                for (int j = 0; j < *myarray[i]; j++)
                {
                        cout <<"*";
                }
                cout<<endl;
        }
}
