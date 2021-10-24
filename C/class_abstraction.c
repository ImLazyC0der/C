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


class MyBook : public Book{
  public:
  int price;
  MyBook(string title,string author, int p):Book(title,author){
  price=p;
  }
  void display()
  {
      cout<<"Title: "<<title<<endl;
      cout<<"Author: "<<author<<endl;
      cout<<"Price: "<<price<<endl;
  }
};
    

int main() {
    cout<<"enter the book title, author name and price"<<endl;
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
