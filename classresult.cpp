#include <iostream>
using namespace std;

class Result {
private:
    float marks[5];
    float total;
    float percentage;
    string status;

public:
    Result() {
        total = 0;
        percentage = 0.0;
        status = "Failed";
    }

    void acceptMarks() {
        cout << "Enter marks for 5 subjects (out of 100):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateResult() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        percentage = (total / 500.0) * 100.0;

        // Assuming a 40% passing threshold
        if (percentage >= 40.0) {
            status = "Pass";
        } else {
            status = "Fail";
        }
    }

    void displayResult() {
        cout << "\n--- Student Result Sheet ---\n";
        cout << "Total Marks: " << total << " / 500\n";
        cout << "Percentage: " << percentage << "%\n";
        cout << "Status: " << status << "\n";
    }
};

int main() {
    Result student;
    student.acceptMarks();
    student.calculateResult();
    student.displayResult();
    return 0;
}
