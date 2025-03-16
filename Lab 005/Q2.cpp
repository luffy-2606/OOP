#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    char* content;

public:
    Book(string t, char* c) : title(t), content(c) {}
    Book() : title(""), content(nullptr) {}
    Book(string t, char* c, bool flag)
    {
        title = t;

        int len = 0;
        for (int i = 0; c[i] != 0; i++)
            len++;

        content = new char[len + 1];
        for (int i = 0; c[i] != 0; i++)
            content[i] = c[i];
        content[len] = 0;
    }
    Book(const Book& obj) // Changed to const reference
    {
        title = obj.title;

        int len = 0;
        for (int i = 0; obj.content[i] != 0; i++)
            len++;

        content = new char[len + 1];
        for (int i = 0; obj.content[i] != 0; i++)
            content[i] = obj.content[i];
        content[len] = 0;
    }

    ~Book()
    {
        delete[] content;
        content = nullptr;
    }

    void display()
    {
        cout << "Original Book Title: " << title << "\nOriginal Book Content: " << content << endl; // Changed to display the entire content
    }

    void ModifyContent()
    {
        char* newContent = new char[1000];
        cout << "\nEnter the new content: ";
        cin.getline(newContent, 1000);
        delete[] content;
        content = new char[strlen(newContent) + 1];
        strcpy_s(content, strlen(newContent) + 1, newContent);
    }
};


int main()
{
    string t;
    char* ptr = new char[1000];

    cout << "Enter the title for book: ";
    getline(cin, t); // Removed cin.ignore() before getline
    cout << "Enter the Content for book: ";
    cin.getline(ptr, 1000);

    Book book1(t, ptr, true);

    Book book2(book1);

    cout << "Book 1: \n";
    book1.display();
    cout << endl;
    cout << "Book 2: \n";
    book2.display();

    book1.ModifyContent();

    cout << "\n\nModified Original Content: \n";
    book1.display();

    delete[] ptr;

    system("pause");
    return 0;
}
