#include <iostream>
#include <string>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
        void setData(void){
            cout << "Enter the Id" << endl;
            cin >> id;
            count ++;
        }
        void getData(void){
            cout << "The Id of this employee is " << id <<
            " and this is employee number "<<count<< endl;
        }
        static void getCount(void){
            cout << "The value of count is " << count << endl;
        }
};

int Employee :: count;
int main(){
    Employee peter, john, jessica;
    peter.setData();
    peter.getData();
    Employee :: getCount();

    john.setData();
    john.getData();
    Employee :: getCount();

    jessica.setData();
    jessica.getData();
    Employee :: getCount();
}