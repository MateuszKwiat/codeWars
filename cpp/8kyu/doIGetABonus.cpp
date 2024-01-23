#include<string>
using namespace std;

string bonus_time(int salary, bool bonus) {
    std::string result = "$";
  
    return bonus ? result + to_string(salary*10) : result + to_string(salary);
}