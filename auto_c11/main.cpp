#include <iostream>
#include <map>

using namespace std;

/* Points to Note
 * 1. The auto keyword can’t be used with function parameters
 * 2. A Function can return auto type , But avoid it, The Proper return type value makes the code more readable
 * 3. You can use "Trailing Return Type for a Function which returns an Auto type
 * 4. C++ 11 Auto makes defining complex or templatized data types easy
 * 5. C++ 11 Auto makes STL iterator loops easier to write and comprehend
 * 6. Auto Enforces the Initialisation of Variables.
 *
 * 1. The auto keyword can’t be used with function parameters
 *
 * int sum(auto x, auto y)
 * {
 *     return x+y;
 * }
 *
 * 2. A Function can return auto type , But avoid it, The Proper return type value makes the code more readable
 *
 * auto sum(int x,int y)
 * {
 *     return x+y;
 * }
 *
 * 3. You can use "Trailing Return Type for a Function which returns an Auto type like below
 *
 * auto sum(int x,int y) ->int
 * {
 *    return x+y;
 * }
 *
 * 4. C++ 11 Auto makes defining complex or templatized data types a breeze
 *
 * auto s_ambientScheduler = std::make_shared<::pplx::default_scheduler_t>(); is More Easier to Read than
 * std::shared_ptr<::pplx::default_scheduler_t> s_ambientScheduler = std::make_shared<::pplx::default_scheduler_t>();
 *
 * 5. C++ 11 Auto makes STL iterator loops easier to write and comprehend
 *
 * Consider the below code
 * for(std::map<std::string,int> ::iterator it=students.begin();it!=students.end();it++)
 * {
 *     std::cout<<it->second<<std::endl;
 * }
 * Below is the Replacement code with Auto Keyword, More cleaner?
 * for(auto it:students)
 * {
 *     std::cout<<it.second<<std::endl;
 * }
 *
 * 6. Auto Enforces the Initialisation of Variables.
 * The Uninitialised varaibales in code is not a good sign
 * auto a; // Compilation Error
 * it should be like
 * auto a=10;
 *
 * */


auto sum(int x, int y) -> int
{
    return x+y;
}

void exampleLoops()
{
    std::map<std::string,int> students;
    students["Alan"]=10;
    students["Sam"]=20;

    for(auto it:students)
    {
        std::cout<<it.second<<std::endl;
    }

}

int main()
{
    int x=sum(10,10);
    exampleLoops();
    return 0;
}


