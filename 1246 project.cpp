#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Question {
    string prompt;
    vector<string> options;
    int correct; // 1-4
};

int main() {
    // --- Question bank (you can also load from file) ---
    vector<Question> questions = {
        {"What is the capital of France?",
         {"Paris", "London", "Rome", "Berlin"}, 1},

        {"Which data type is used to store true/false in C++?",
         {"int", "string", "bool", "float"}, 3},

        {"What is 2 + 2?",
         {"3", "4", "5", "6"}, 2},

        {"Which keyword is used to define a class in C++?",
         {"function", "class", "struct", "define"}, 2},

        {"Who developed the C++ language?",
         {"Dennis Ritchie", "Bjarne Stroustrup", "James Gosling", "Guido van Rossum"}, 2}
    };

    int score = 0;
    int total = questions.size();

    for (int i = 0; i < total; i++) {
        cout << "Q" << i + 1 << ": " << questions[i].prompt << endl;

        for (int j = 0; j < questions[i].options.size(); j++) {
            cout << j + 1 << ". " << questions[i].options[j] << endl;
        }

        cout << "Your choice (1-4): ";
        int choice;
        cin >> choice;

        if (choice == questions[i].correct) {
            cout << "✅ Correct!\n\n";
            score++;
        } else {
            cout << "❌ Wrong! Correct answer: "
                 << questions[i].options[questions[i].correct - 1] << "\n\n";
        }
    }

    double accuracy = (double)score / total * 100.0;

    cout << "--- Quiz Finished ---\n";
    cout << "Your Score: " << score << " / " << total << endl;
    cout << "Accuracy: " << fixed << setprecision(2) << accuracy << "%" << endl;

    // --- Save result to file ---
    ofstream out("results.txt", ios::app);
    if (out) {
        out << "Score: " << score << "/" << total
            << " | Accuracy: " << accuracy << "%" << endl;
    }

    return 0;
}
