#include <iostream>
using namespace std;
class CafeService{
    protected:
    string OrderID;
    int Price;
    public:
    CafeService(){
        OrderID = "Order#1";
        Price = 0;
    }
    CafeService(string OrderID,int Price){
        this->OrderID = OrderID;
        this->Price = Price;
    }
};
class StaffService : public CafeService{
    protected:
    int ServiceFee;
    int CabinNumber;
    int totalCost;
    public:
    StaffService(string OrderID,int Price,int ServiceFee,int CabinNumber){
        this->OrderID = OrderID;
        this->Price = Price;
        this->ServiceFee = ServiceFee;
        this->CabinNumber = CabinNumber;
    }
    void totalCharges(){
        totalCost = ServiceFee + Price;
        
    }
    void Details(){
        cout<<"=============================Details Of Order========================="<<endl;
        cout<<"The Order ID is :"<<OrderID<<endl;
        cout<<"The Price Of Food is : "<<Price<<endl;
        cout<<"The Total Cost of An Order is :"<<totalCost<<endl;
            }
};
int main(){
    StaffService S1("Order#1",500,40,5);
    S1.totalCharges();
    S1.Details();
}