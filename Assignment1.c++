#include <iostream>
using namespace std;

class Ride
{
private:
    string RideName;
    float total_Ride_Time;
    bool isRideStart;
    bool isRideStop;
    bool EmergencyStop;
    int Counter;
    static int price;
public:
    void setRideName(string RideName){
        this->RideName = RideName;
        }
    void getRideName(){
        cout<<"The Ride Name is: "<<RideName<<endl;
    }
    void settotalRideTime(float total_Ride_Time){
        this->total_Ride_Time = total_Ride_Time;
    }
    void getTotalRideTime(){
        cout<<"The Total Time Spend On Ride is :"<<total_Ride_Time<<endl;
    }
    void checkRideStart(bool isRideStart){
        this->isRideStart = isRideStart;
    }
    void isridestart(){
    }
     void isridestop(bool isRideStop){
        this->isRideStop = isRideStop;
    }
    void getRideStop(){

    }
    void isEmergencyStop(bool EmergencyStop){
        this->EmergencyStop = EmergencyStop;
    }
    void setCounter(int Counter){
        this->Counter = Counter;
        
    }
    void getCounter(){
        if(Counter >=25){
            cout<<"The Seats Are Full"<<endl;
        }
        else{
            cout<<"YOu Can ride"<<endl;
        }
    }
    static void setPrice(int p){
        price = p;
    }
    void getPrice(){
        cout<<"The Price of Ride is : "<<price<<endl;
    }
};
int Ride :: price = 0;
int main(){
    Ride :: setPrice(150);
    Ride R1;
    R1.setRideName("Roller Coaster");
    R1.settotalRideTime(55.5);
    R1.isridestart();
    R1.isridestop("No");
    R1.isEmergencyStop("No");
    R1.setCounter(5);
    R1.getRideName();
    R1.getPrice();
}