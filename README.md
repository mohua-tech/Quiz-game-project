# C++ Quiz Game

A simple command-line quiz game built with C++.  
It asks the user multiple-choice questions, checks answers, calculates the score, shows accuracy, and saves results in a file.

---

## 📌 Features
- *Multiple-choice questions* (4 options each)
- *Score calculation* and percentage accuracy
- *Saves results* to a file (results.txt)
- Simple and easy-to-understand C++ code

---

## 🛠 How It Works
1. The program stores questions in a vector of struct Question.
2. It loops through each question:
   - Displays the question and 4 answer options.
   - Takes user input for the answer.
   - Checks if the answer is correct or wrong.
   - Updates the score.
3. At the end:
   - Displays the total score and accuracy percentage.
   - Saves the result to results.txt (appends without overwriting).

---

## 📂 File Output
The results are stored in a file called results.txt in the following format:# Quiz-game-project
Quiz game project
