
#include <iostream>
#include <string>
#include <map>

using namespace std;

struct Marks {
    string name;
    string subject;
    int rollNumber;
    int marks;
    bool isDisciplined;
};

int main() {
    map<int, Marks> marksTracker;
    int choice;

    do {
        cout << "1. Add Marks\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                Marks newMarks;
                cout << "Enter name: ";
                cin >> newMarks.name;
                cout << "Enter subject: ";
                cin >> newMarks.subject;
                cout << "Enter roll number: ";
                cin >> newMarks.rollNumber;
                cout << "Enter marks: ";
                cin >> newMarks.marks;
                cout << "Is the student disciplined? (1 for Yes, 0 for No): ";
                cin >> newMarks.isDisciplined;

                if(newMarks.isDisciplined)
                    newMarks.marks += 5;

                marksTracker[newMarks.rollNumber] = newMarks;
                cout << "Marks added successfully!\n";
                break;
            }
            case 2:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while(choice != 2);

    cout << "Marks Tracker:\n";
    for(auto const& pair : marksTracker) {
        cout << "Name: " << pair.second.name << ", ";
        cout << "Subject: " << pair.second.subject << ", ";
        cout << "Roll Number: " << pair.second.rollNumber << ", ";
        cout << "Marks: " << pair.second.marks << endl;
    }

    return 0;
}
```

Now, when adding marks, the user will be prompted to enter whether the student is disciplined or not. If the student is disciplined (indicated by entering 1), then 5 credits will be added to their marks.
