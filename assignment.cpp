#include<iostream>
using namespace std;
class Test{
private:
int *x;
public:
Test(int value=0){
    x=new int(value);
}
void setx(int val){
    *x=val;
}
void getx(){
    cout<<*x<<endl;
}
Test& operator =(Test & rhs){
    if(this!=&rhs)
    *x=*rhs.x;
    return *this;

}
};
int main(){
    Test t1(10);
    Test t2;
    t2=t1;
    t1.setx(20);
    t1.getx();
    t2.getx();



}
