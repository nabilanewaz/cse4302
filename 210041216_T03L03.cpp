#include <iostream>
using namespace std;

class Student{
private:
    string firstname;
    string lastname;
    string course;
    int studentid;
    int birthyear;
    float obtainedmarks;
public:
    void displayDetails(string fn,string ln,string cor,int id,int year,float marks){
        firstname=fn;
        lastname=ln;
        course=cor;
        studentid=id;
        birthyear=year;
        obtainedmarks=marks;
    }
    void printTranscript() {
        cout <<"Name:"<<firstname<<" "<<lastname<<endl;
        cout <<"Course:"<<course<<endl;
        cout <<"Obtained Marks:"<<obtainedmarks<<endl;
    }
    int displayAge(){
        int age=(2023-birthyear);
        return age;
    }
    float displayGPA(){
        float gpa;
        if(obtainedmarks>=80)
        gpa=4.00;
        else if(obtainedmarks>=70)
        gpa=3.75;
        else if(obtainedmarks>=60)
        gpa=3.50;
        else if(obtainedmarks>=50)
        gpa=3.25;
        else if(obtainedmarks>=40)
        gpa=3.00;
        else gpa=0.00;
        return gpa;
    }
    bool willGraduate(){
        if(obtainedmarks>=40)
            return true;
        else return false;
    }
    float updatedGPA(){
        obtainedmarks+=obtainedmarks*0.1;
    }
};

int main(){
    Student student1;
    student1.displayDetails("Nabila","Newaz","CSE-4308",216,2003,79.5);
    cout<<"TRANSCRIPT"<<endl;
    student1.printTranscript();
    cout<<"Age:"<<student1.displayAge()<<endl;
    cout<<"GPA:"<<student1.displayGPA()<<endl;
    cout<<"Will the student graduate? Ans:"<<student1.willGraduate()<<endl;
    student1.updatedGPA();
    cout<<"Updated GPA:"<<student1.displayGPA()<<endl;
}
