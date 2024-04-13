#include <iostream>
using namespace std;

void drawRectangle(int width, int height, char ch = '*') {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << ch;
        }
        cout << endl;
    }
}

void drawTriangle(int height, char ch = '*') {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << ch;
        }
        cout << endl;
    }
}

void drawMenu() {
    cout << "Console Drawing Program" << endl;
    cout << "1. Draw Rectangle" << endl;
    cout << "2. Draw Triangle" << endl;
    cout << "3. Exit" << endl;
}

int main() {
    while (true) {
        drawMenu();
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                int width, height;
                char ch;
                cout << "Enter width of rectangle: ";
                cin >> width;
                cout << "Enter height of rectangle: ";
                cin >> height;
                cout << "Enter character for drawing (default is '*'): ";
                cin >> ch;
                drawRectangle(width, height, ch);
                break;
            case 2:
                int triHeight;
                cout << "Enter height of triangle: ";
                cin >> triHeight;
                cout << "Enter character for drawing (default is '*'): ";
                cin >> ch;
                drawTriangle(triHeight, ch);
                break;
            case 3:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
