#include<iostream>
using namespace std;
class marks{
private:
int mark;
public:
marks(){
    mark=0;
}
marks(int n){
    mark=n;
    cout<<"Constructor is called";
}
void operator ()(int mk){
    mark=mk;
    // return *this;

}
void display(){
    cout<<"You marks is "<<mark;
}

};
int main(){
    marks m(25);
    m.display();
    m(44);
    m.display();
    

    
}