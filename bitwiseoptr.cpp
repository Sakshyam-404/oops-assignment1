#include<iostream>
using namespace std;
class bitwiseops{
    int val;
    public:
     bitwiseops(){
        val=0;
    }
    bitwiseops(int val){
        this->val=val;

}
//bitwise and // takes two values and return 1 if both are one
int operator &(bitwiseops b){
    return val & b.val;

}
//bitwise or // takes two values and return 1 if one of them is 1 
int operator |(bitwiseops b){ 
    return val | b.val;

}
// XOR // takes two values and return 1 if both are different
int operator ^(bitwiseops b){ 
    return val ^ b.val;
}
//<< // takes two number number on left is the number to be shifted and no on right is how many number is to be shifted
int operator <<(bitwiseops b){ 
    return val << b.val;
}
//>> // takes two number number on left is the number to be shifted and no on right is how many number is to be shifted
int operator >>(bitwiseops b){ 
    return val >> b.val;
}
//compliments takes one number and compliments everybit
int operator ~(){ 
    return ~val;
}


};
int main(){
    bitwiseops b(5),b1(3);
    cout<<(b&b1)<<endl;
    cout<<(b|b1)<<endl;
    cout<<(b^b1)<<endl;
    cout<<(b<<b1)<<endl;
    cout<<(b>>b1)<<endl;
    cout<<(~b1)<<endl;
}