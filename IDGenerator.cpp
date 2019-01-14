//Author: Adrian Sharpless
//Last modification date: 6/24/2017
//Random ID generator
//This program generates a unique 8 digit number

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

int counter = 0;//initialize a counter variable
int random;

srand (time(NULL));


for (counter; counter < 8; counter ++){
    random = rand() % 9 + 1;
    cout<<random;
    }
cout<<endl;

}
