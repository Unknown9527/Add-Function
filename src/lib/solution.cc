#include "solution.h"

// std::string Solution::PrintHelloWorld() { 
//   return "**** Hello World ****"; 
// }

// int + int
int Solution::Add(int a, int b)
{
    int result = a + b;
    return result;    
}

// string + string
string Solution::Add(string s1, string s2){
    return s1 + s2;
}

// int + string
string Solution::Add(int a, string s){
    return to_string(a) + s;
}

// string + int
string Solution::Add(string s, int a){
    return s + to_string(a);
}
