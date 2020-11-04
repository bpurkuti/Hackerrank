#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};
// Write your MyBook class here

    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
    
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
    
// End class

class MyBook:Book{
    protected:
    int price;
    public:
    MyBook(string title, string author, int price):Book(title,author){
        this->price=price;
    }
    
    void display(){
        cout<<"Title: "<<Book::title<<endl;
        cout<<"Author: "<<Book::author<<endl;
        cout<<"Price: "<<price<<endl;
    }
};

int main() {