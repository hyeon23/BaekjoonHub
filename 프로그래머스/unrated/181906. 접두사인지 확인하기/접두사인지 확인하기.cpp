#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    if(my_string.size() < is_prefix.size())
        return 0;
    
    return my_string.substr(0, is_prefix.size()) == is_prefix;
}