#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    string author;
public:
    void getDetails() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
    }

    void showDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class Book : virtual public Publication {
protected:
    int copies;
    int issued;
public:
//    Book() : copies(0), issued(0) {}

    void getBookDetails() {
        cout << "Enter number of copies: ";
        cin >> copies;
        issued = 0;
    }

    void showBookDetails() {
        cout << "Copies available: " << copies - issued << endl;
        cout << "Copies issued: " << issued << endl;
    }

    bool issueBook() {
        if (copies - issued > 0) {
            issued++;
            cout << "Book issued successfully.\n";
            return true;
        } else {
            cout << "No copies available.\n";
            return false;
        }
    }

    bool returnBook() {
        if (issued > 0) {
            issued--;
            cout << "Book returned successfully.\n";
            return true;
        } else {
            cout << "No issued books to return.\n";
            return false;
        }
    }

    bool searchBook(string searchTitle) {
        return title == searchTitle;
    }
};

class EBook : virtual public Publication {
protected:
    string downloadLink;
public:
    void getEBookDetails() {
        cout << "Enter download link: ";
        cin >> downloadLink;
    }

    void showEBookDetails() {
        cout << "Download link: " << downloadLink << endl;
    }
};

class DigitalLibrary : public Book, public EBook {
public:
    void getLibraryDetails() {
        getDetails();

        cout << "\n Book Details \n";
        getBookDetails();

        cout << "\n EBook Details \n";
        getEBookDetails();
    }

    void showLibraryDetails() {
        showDetails();

        cout << "\n Book Details \n";
        showBookDetails();

        cout << "\n EBook Details \n";
        showEBookDetails();
    }
};

int main() {
    DigitalLibrary lib;

    lib.getLibraryDetails();

    int choice;
    string searchTitle;

    do {
        cout << "\n--- Digital Library Menu ---\n";
        cout << "1. Show Library Details\n";
        cout << "2. Search Book\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            lib.showLibraryDetails();
            break;
        case 2:
            cout << "Enter book title to search: ";
            cin >> searchTitle;
            if (lib.searchBook(searchTitle)) {
                cout << "Book found!\n";
            } else {
                cout << "Book not found.\n";
            }
            break;
        case 3:
            lib.issueBook();
            break;
        case 4:
            lib.returnBook();
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
