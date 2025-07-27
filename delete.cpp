#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int grade;
    public:
    Student(){
        name="no name";
        grade=0;

    }
    Student(string name, int grade){
        this->name=name;
        this->grade=grade;
    }
    void display(){
        cout<<"Name : "<<name<<" grade : "<<grade<<endl;
    }
    void *operator new(size_t size){
        void *pointer;
        cout<<size<<" is allocated"<<endl;
        pointer=malloc(size);
        return pointer;
    }
    void operator delete(void *pointer){
        cout<<"The address is freed";
        free(pointer);
    }

};
int main(){
    Student* sptr;
    sptr = new Student("Shyam", 12);
    sptr->display();
    delete sptr;


}