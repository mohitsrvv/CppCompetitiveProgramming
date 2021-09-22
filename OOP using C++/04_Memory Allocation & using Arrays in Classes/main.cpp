#include <iostream>
#include <string>
using namespace std;

class Shop {
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) {counter=0;}
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void){
    cout << "Enter Id of your Item no "<< counter+1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your Item" << endl;
    cin >> itemPrice[counter];
    counter ++;
}

void Shop :: displayPrice(void){
    for (int i=0; i<counter; i++){
        cout << "The price of item with Id " <<itemId[1]
        << " is " <<itemPrice[i] << endl;
    }
}

int main(){
    Shop lo;
    lo.initCounter();
    lo.setPrice();
    lo.setPrice();
    lo.setPrice();
    lo.displayPrice();
}
