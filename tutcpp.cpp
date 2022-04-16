#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int pages;
    Book(string atitle,string aauthor,int apages){
        title=atitle;
        author=aauthor;
        pages=apages;
    }
};
int main() {
    Book lib1("harry","rowling",90);
   cout<<lib1.title<<"\n"<<lib1.author<<"\n"<<lib1.pages;
   return 0;
}