//
//  main.cpp
//  Factorial C++
//
//  Created by Eun Jae Lee on 4/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  5! = 4x4x3x2x1 = 120
//  7! = 7 × 6 × 5 × 4 × 3 × 2 × 1 = 5040
//  n! = n x (n-1)!
//  125! = 125 × 124!

//  (n+1)!=(n+1).n!

#include <iostream>
using namespace std;

int main() {

    int factorial (int);
    int x;
    cout<<"Enter value for factorial:\n";
    cin>>x;
    
    int y;
    y = factorial(x);
    
    cout<<y<<"\n";
    
}

int factorial(int z) {
    
    if(z==1) return 1;
    else return z * factorial(z-1);
}
