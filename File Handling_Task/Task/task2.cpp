// 2. Write a program that reads a CSV file and calculates the average of a specific column of numerical data. 
// Name,Age,Height,Weight
// John,28,5.9,170
// Jane,34,5.7,150
// Alice,23,5.5,120
// Bob,40,6.0,180
// Charlie,29,5.8,165

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class CSVReader {
public:
    double calculateColumnAverage(int column) {
        string data = "Name,Age,Height,Weight\n"
                      "John,28,5.9,170\n"
                      "Jane,34,5.7,150\n"
                      "Alice,23,5.5,120\n"
                      "Bob,40,6.0,180\n"
                      "Charlie,29,5.8,165\n";

        stringstream ss(data);
        string line, word;
        int count = 0;
        double sum = 0.0;
        int lineNum = 0;
        while (getline(ss, line)) {
            lineNum++;
            if (lineNum == 1) 
                continue;

            stringstream lineStream(line);
            int colCount = 0;
            bool columnFound = false;
            while (getline(lineStream, word, ',')) {
                colCount++;
                if (colCount == column) {
                    try {
                        sum += stod(word);
                        count++;
                        columnFound = true;
                        break; 
                    } catch (const invalid_argument& e) {
                        cerr << "Warning: Non-numeric value found in column " << column << " at row " << lineNum << endl;
                        break; 
                    }
                }
            }
            
            if (!columnFound) {
                cerr << "Warning: Column " << column << " not found in row " << lineNum << endl;
            }
        }

        if (count > 0) {
            return sum / count;
        } else {
            cerr << "Error: No numeric data found in column " << column << endl;
            return 0.0;
        }
    }
};

int main() {
    CSVReader csv;
    double average = csv.calculateColumnAverage(3); 
    cout << "Average height: " << average << endl;
    return 0;
}



