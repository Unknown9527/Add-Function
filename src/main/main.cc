#include <iostream>
#include "src/lib/solution.h"


int main()
{
    Solution solution ;

    cout << solution.Add(3, 5) << endl;
    cout << solution.Add("abc", "efg") << endl;
    cout << solution.Add("EE", 599) << endl;
    cout << solution.Add(599, "EE") << endl;
    
    return 0;
}