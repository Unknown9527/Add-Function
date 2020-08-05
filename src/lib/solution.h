#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

using namespace std;


class Solution
{
   public:
      // Add two intergers together
      int Add(int a, int b);

      // string concatenate; two strings link together
      string Add(string s1, string s2);
 
      // int, string case; an int and a string link together
      string Add(int a, string s);

      // string int case; a string and an int link together
      string Add(string s, int a);

};

#endif