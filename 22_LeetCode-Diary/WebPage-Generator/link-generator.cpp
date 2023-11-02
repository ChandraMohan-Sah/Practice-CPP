/*
---------(input.txt) should be in this format----------

Title

Question Name
Difficulty Level
Link to that Question

Question Name
Difficulty Level
Link to that Question

and soon.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

struct Question {
    std::string name;
    std::string difficulty;
    std::string link;
};

int main() {
    std::ifstream inputFile("input.txt"); // Open the input file

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open the input file." << std::endl;
        return 1;
    }

    std::ofstream outputFile("output.html"); // Create the output HTML file

    if (!outputFile.is_open()) {
        std::cerr << "Failed to create the output HTML file." << std::endl;
        inputFile.close();
        return 1;
    }

    // Read the title from the input file
    std::string title;
    std::getline(inputFile, title);

    // Create containers for each difficulty level
    std::vector<Question> questions;

    // Read the input file and split questions on empty lines
    while (!inputFile.eof()) {
        Question question;

        // Read the name of the question
        std::getline(inputFile, question.name);

        // Check if it's an empty line (indicating the end of a question)
        if (question.name.empty()) {
            continue;
        }

        // Read the difficulty and link
        std::getline(inputFile, question.difficulty);
        std::getline(inputFile, question.link);

        questions.push_back(question);
    }

    // Sort questions within each difficulty level
    std::sort(questions.begin(), questions.end(), [](const Question& a, const Question& b) {
        return a.name < b.name;
    });

    // Write the initial part of the HTML document, including the title and CSS
    outputFile << "<html>\n";
    outputFile << "  <head>\n";
    outputFile << "    <title>" << title << "</title>\n";

    // CSS for the table
    outputFile << "    <style>\n";
    outputFile << "      .question-table {\n";
    outputFile << "        width: 70%;\n";
    outputFile << "        border-collapse: collapse;\n";
    outputFile << "      }\n";
    outputFile << "      .question-table th, .question-table td {\n";
    outputFile << "        border: 1px solid #ddd;\n";
    outputFile << "        padding: 8px;\n";
    outputFile << "        text-align: left;\n";
    outputFile << "      }\n";
    outputFile << "      .question-table th {\n";
    outputFile << "        background-color: #f2f2f2;\n";
    outputFile << "      }\n";
    outputFile << "      .question-table tr:nth-child(even) {\n";
    outputFile << "        background-color: #f2f2f2;\n";
    outputFile << "      }\n";
    outputFile << "      .easy {\n";
    outputFile << "        color: green; /* Green text color */\n";
    outputFile << "      }\n";
    outputFile << "      .medium {\n";
    outputFile << "        color: orange; /* Orange text color */\n";
    outputFile << "      }\n";
    outputFile << "      .hard {\n";
    outputFile << "        color: red; /* Red text color */\n";
    outputFile << "      }\n";
    outputFile << "    </style>\n";
    outputFile << "  </head>\n";
    outputFile << "  <body style=\"display: flex; flex-direction: column; align-items: center; height: 100vh;\">\n";

    // Add the title as a heading
    outputFile << "    <h1>" << title << "</h1>\n";

    // Start the table
    outputFile << "    <table class=\"question-table\">\n";

    // Add the static header row
    outputFile << "      <tr>\n";
    outputFile << "        <th>Similar Questions</th>\n";
    outputFile << "        <th>Difficulty Level</th>\n";
    outputFile << "      </tr>\n";

    // Write questions with links opening in a new tab
    for (const Question& question : questions) {
        outputFile << "      <tr>\n";
        outputFile << "        <td><a href=\"" << question.link << "\" target=\"_blank\">" << question.name << "</a></td>\n";
        outputFile << "        <td class=\"" << question.difficulty << "\">" << question.difficulty << "</td>\n";
        outputFile << "      </tr>\n";
    }

    // End the table
    outputFile << "    </table>\n";

    // Write the closing part of the HTML document
    outputFile << "  </body>\n";
    outputFile << "</html>\n";

    // Close both input and output files
    inputFile.close();
    outputFile.close();

    std::cout << "HTML page with title at the top, sorted table, and links opening in a new tab, with different text colors for difficulty levels, generated successfully in 'output.html'" << std::endl;

    return 0;
}
