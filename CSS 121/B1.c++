#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (){
    int a[10][10] = {0},Taxicab,Euclidean,Chebyshev;
    srand(time(0));

    /* Tree */
    a[rand()%10][rand()%10] = 1;

    /* Hero*/
    // a[5][4] = 2;
    a[5][5] = 2;

    /* Monster*/
    // a[5][0] = 3;
    a[9][5] = 3;


    for(int i=0;i<10;i++){
        cout << endl;
        for(int j=0;j<10;j++){
        cout << a[i][j];}
    }
    cout << endl;



    Taxicab = abs(4-5)+abs(0-5);
    Euclidean = sqrt(pow(4-5,2)+pow(0-5,2));
    if(abs(5-4)>abs(0-5)){
        Chebyshev = abs(5-4);} 
    else {Chebyshev = abs(0-5);}

    cout << "Taxicab = " <<Taxicab << endl;
    cout << "Euclidean = " <<Euclidean << endl;
    cout << "Chebyshev = " <<Euclidean << endl;


}