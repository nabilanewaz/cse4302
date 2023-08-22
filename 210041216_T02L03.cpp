#include <iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    int year;
    bool availablity;
public:
    void setDetails(string booktitle,string bookauthor,int bookyear, bool a){
       title=booktitle;
       author=bookauthor;
       year=bookyear;
       availablity = a;
    }
    void displayDetails(){
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Year:"<<year<<endl;
    }
    bool checkIn(){
         if(availablity)
            return true;
    }
    bool checkOut(){
         if(availablity)
            return false;
    }
    bool isClassic(){
        int diff=2023-year;
        if(diff>50)
            return true;
        else return false;
}
};
int main(){
    Book book1;
    book1.setDetails("Fangirl","Rowell",2014,1);
    cout<<"Book Details:"<<endl;
    book1.displayDetails();
    cout<<"Is the book available? Ans:"<<book1.checkIn()<<endl;
    cout<<"Is the book unavailable? Ans:"<<book1.checkOut()<<endl;
    cout<<"Is the book classic? Ans:"<<book1.isClassic()<<endl;
}
