#include<iostream>
using namespace std;
class Array{
    private:
    int arr[5];
    public:
    Array(){
        for(int i=0; i<5;i++){
            arr[i]=i*5;
        }


    }
    int& operator[](int x){
        return arr[x];
        
    }
    void display(){
        for(int i=0; i<5; i++){
            cout<<arr[i]<<endl;
        }
    }

};
int main(){
    Array a;
    a.display();
    a[2]=33;
    a.display();
}