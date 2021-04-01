#include <bits/stdc++.h> //This is all in one Library for C++
using namespace std;
class Library
{
public:
    vector<string> book; //using dynamic array
    void addBook(string b_name)
    {
        book.push_back(b_name);
    }
    void delBook(string b_name)
    {
        std::vector<string>::iterator it;
        it = find(book.begin(), book.end(), b_name);
        if (it != book.end())
            book.erase(it);
        else
            cout << "\nBook Not Found\n";
    }
    void printBook() //This function Prints the list of Book
    {
        for (auto x : book)
            cout << x << "\n";
        cout << "\n";
    }
};
int main()
{
    Library lib1;
    char opp;
    string temp;
    cout << "A : Add Book\n" //list of operation
         << "D : Delete Book\n"
         << "P : Print List of Available Books\n"
         << "N : Number of Books\n"
         << "E : Exit\n";
    do
    {
        cout << "Enter operation to be performed : ";
        cin >> opp;
        cout << "\n";
        switch (opp)
        {
        case 'A':
            cout << "Enter the name of Book to be added : ";
            cin >> temp;
            lib1.addBook(temp);
            break;

        case 'D':
            cout << "Enter the name of Book to be deleted : ";
            cin >> temp;
            lib1.delBook(temp);
            break;

        case 'P':
            lib1.printBook();
            break;

        case 'E':
            continue;
            break;
        }
        cout << "Numbers of Book Available In Library : " << lib1.book.size() << "\n";
    } while (opp != 'E');
}