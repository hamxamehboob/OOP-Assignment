#include <iostream>
using namespace std;
class Employee{
    protected:
        string Name;
        int EMPID;
};
class HourlyEmployee : public Employee{
    public:
        int HourlyIncome;
        int income;
        HourlyEmployee(string Name,int EMPID,int HourlyIncome){
            this->Name = Name;
            this->EMPID = EMPID;
            this->HourlyIncome = HourlyIncome;
        }
    void Calculate_Hourly_Income(){
        income = HourlyIncome*150;
        cout<<"Your Hourly Income is RS:"<<income<<endl;
    }
    void Details(){
        cout<<"===============================Details OF Hourly Employee ==========================="<<endl;
        cout<<"The Name of Employee is :"<<Name<<endl;
        cout<<"The Employee ID is : "<<EMPID<<endl;
        cout<<"You Worked "<<HourlyIncome<<" Hours"<<endl;
    }
};
class PermanentEmployee : public Employee{
    public:
        int HourlyIncome;
        int income;
        PermanentEmployee(string Name,int EMPID,int HourlyIncome){
            this->Name = Name;
            this->EMPID = EMPID;
            this->HourlyIncome = HourlyIncome;
        }
    void Calculate_the_Income(){
        income = 240*150;
        cout<<"Your Income is RS:"<<income<<endl;
    }
    void Details(){
        cout<<"===============================Details OF Permanent Employee ==========================="<<endl;
        cout<<"The Name of Employee is :"<<Name<<endl;
        cout<<"The Employee ID is : "<<EMPID<<endl;
    }
};
int main(){
    HourlyEmployee H1("Hamxa Mehboob",22,4);
    PermanentEmployee P1("Hamxa MEhboob",44,5);
    H1.Calculate_Hourly_Income();
    P1.Calculate_the_Income();
    H1.Details();
    P1.Details();
}