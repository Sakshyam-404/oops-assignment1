#include<iostream>
using namespace std;
class logicalops{
    private:
    int a;
    public:
    logicalops(){
        a=0;
    }
    logicalops(int a){
        this->a=a;
    }
    bool operator !(){   //not operator returns true when its value is 0 or false
        if(!a){
            cout<<"The number is zero"<<endl;
        }
        else{
            cout<<"The number is not zero"<<endl;
        }
    }
    logicalops operator &&(logicalops t){ // and operator returns true when its both values are non zero
        if(a && t.a){
            cout<<"Both the values are non zero"<<endl;
        }
        else{
            cout<<"anyone of tha value is non zero"<<endl;
        }
    }
    logicalops operator ||(logicalops t){ // or operator returns true when its any value is non zero
        if(a || t.a){
            cout<<"One of the value is non zero"<<endl;
        }
        else{
            cout<<"Both are non zero";
        }

    }

};
int main(){
    logicalops l1(0),l2(1),l3(0),l4(5),l5;
    !l1;
    !l2;
    l1 && l3;
    l2 && l4;
    l1 || l2;
    l4||l2;


}
