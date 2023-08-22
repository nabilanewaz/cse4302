#include <iostream>
using namespace std;

class Counter{
private:
    int count;
    int increment_step;
public:
    void setIncrementStep(int step_val){
        increment_step=step_val;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count+=increment_step;
    }
    void resetCount(){
        count=0;
    }
    bool isEven(){
       if(count%2==0)
        return true;
       else return false;
    }
};

int main(){
    Counter counter1;

    counter1.resetCount();
    counter1.setIncrementStep(5);
    counter1.increment();
    counter1.increment();

    cout<<"Current count value:"<<counter1.getCount()<<endl;
    cout<<"Is current count value even?"<<"\n"<<"Ans:"<<counter1.isEven()<<endl;

    counter1.resetCount();


    cout<<"After using reset count value:"<<counter1.getCount()<<endl;
}
