#include <iostream>
#include <iomanip>
using namespace std;

void getInput(int &n1, int &n2, int &n3 ){
    cout << "Input 3 numbers: ";
    cin >> n1 >> n2 >> n3;
}

int findMin(int n1, int n2, int n3){
    int min;

    if(n1 <= n2 && n1 <= n3){
        min = n1;
    }
    else if(n2 <= n1 && n2 <= n3){
        min = n2;
    }
    else{
        min = n3;
    }

    return min;
}

void printResult(int &n1, int &n2, int &n3, int &min){
    cout << n1 << ' ' << n2 << ' '<< n3 << ' ' << min << endl;
}