#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string RollNumber;
    string courseName;
    int semester;
    static int fees;
public:
    Student(string name,string RollNumber,string courseName,int semester){
        this->name = name;
        this->RollNumber = RollNumber;
        this->courseName = courseName;
        this->semester = semester;
    }
    void setName(string name){
        this->name = name;
    }
    void getName(){
        cout<<"The Name of Student is :"<<name<<endl;
    }
    void setRollNumber(string RollNumber){
        this->RollNumber = RollNumber;
    }
    void getRollNumber(){
        cout<<"The Roll Number of Student is :"<<RollNumber<<endl;
    }
    void setCourseName(string courseName){
        this->courseName = courseName;
    }
    void getcouseName(){
        cout<<"The Course of Student is :"<<courseName<<endl;
    }
    void setSemester(int semester){
        this->semester = semester;
    }
    void getSemester(){
        cout<<"The Semester of Student is :"<<semester<<endl;
    }
    void getDetails(){
        cout<<"The Name of Student is :"<<name<<endl;        
        cout<<"The Roll Number of Student is :"<<RollNumber<<endl;
        cout<<"The Course of Student is :"<<courseName<<endl;
        cout<<"The Semester of Student is :"<<semester<<endl;
    }
    static void setFees(int f){
        fees = f;
    }
};
int Student :: fees = 0;
int main(){
    Student::setFees(4000);
    Student S1("Hamxa Mehboob","SP22-BSCS-0084","OOP",2);
    S1.getDetails();
}