#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Task {
    string description;
    bool completed;
    bool pending;
    Task(const string &description): description(description), completed(false), pending(false){}
};

class ToDoList {
private:
    vector<Task> Tasks;

public:
    void AddTask(const string& description) {
        Tasks.push_back(Task(description));
        cout << "Task added in the list: " << description << endl;
    }

    void ViewList() {
        if (Tasks.empty()) {
            cout << "There is no Tasks in the list." << endl;
        } else {
            cout << "Tasks in the list:" << endl;
            for (int i = 0; i < Tasks.size(); i++) {
                cout << i + 1 << ". [" << (Tasks[i].completed ? "C" : " " && Tasks[i].pending ? "P" : " ") << "] " << Tasks[i].description << endl;
            }
        }
    }

    void MarkAsCompleted(int index) {
        if (index >= 0 && index < Tasks.size()) {
            Tasks[index].completed = true;
            cout << "Task marked as completed: " << Tasks[index].description << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }
    void MarkAsPending(int index) {
        if (index >= 0 && index < Tasks.size()) {
            Tasks[index].pending = true;
            cout << "Task pending: " << Tasks[index].description << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void RemoveTask(int index) {
        if (index >= 0 && index < Tasks.size()) {
            cout << "Task removed: " << Tasks[index].description << endl;
            Tasks.erase(Tasks.begin() + index);
        } else {
            cout << "Invalid index!" << endl;
        }
    }
};

int main() {
    ToDoList obj;
    int choice;

    do {
        cout << "===== ToDo List =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Completed" << endl;
        cout << "4. Mark Pending" << endl;
        cout << "5. Remove List Task" << endl;
        cout << "6. Quit Program" << endl;
        cout << "Enter your preferred choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string Task_Desc;
                cout << "Enter task: ";
                cin.ignore();
                getline(cin, Task_Desc);
                obj.AddTask(Task_Desc);
                break;
            }
            case 2:
                obj.ViewList();
                break;
            case 3: {
                size_t index;
                cout << "Enter the index to mark completed: ";
                cin >> index;
                obj.MarkAsCompleted(index - 1);
                break;
            }
            case 4: {
                int index;
                cout << "Enter index to mark pending: ";
                cin >> index;
                obj.MarkAsPending(index - 1);
                break;
            }
            case 5: {
                size_t index;
                cout << "Enter index to remove the task: ";
                cin >> index;
                obj.RemoveTask(index - 1);
                break;
            }
            case 6:
                cout << "Exit!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again." << endl;
        }

    } while (choice != 5);

    return 0;
}