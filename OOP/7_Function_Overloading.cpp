
#include<bits/stdc++.h>
using namespace std;
int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

float add(float a, float b, float c){
    return a+b+c;
}

// cpp supports function overloading 

int main(){

    cout << "Sum of 10 and 20: " << add(10, 20) << endl;  // Calls the int version of add(int, int)

    // Calling the integer version of the function with three arguments
    cout << "Sum of 10, 20, and 30: " << add(10, 20, 30) << endl;  

    // Calling the float version of the function
    cout << "Sum of 10.5 and 20.5: " << add(10.5f, 20.5f) << endl;  

}
