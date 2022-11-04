#include "main.cpp"

using namespace std;

class Zoo {
    private:
        string department_name; 
    public:
        Zoo(string department_name);
        string get_department_name();
        void set_department_name(string department_name);
}