
#include <iostream>
#include <vector>
#include <algorithm>

// Define a Student structure with attributes: name, roll_number, and cgpa.
struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Custom comparison function for sorting students by CGPA in descending order.
bool compareByCGPA(const Student& a, const Student& b) {
    return a.cgpa > b.cgpa;
}

// Function to sort a list of student objects by CGPA.
void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByCGPA);
}

int main() {
    // Create a list of student objects.
    std::vector<Student> studentList = {
        {"Alice", "A001", 3.7},
        {"Bob", "B002", 3.5},
        {"Charlie", "C003", 3.9},
        {"David", "D004", 3.2},
    };

    // Call the sort_students function to sort the list by CGPA.
    sort_students(studentList);

    // Print the sorted list.
    std::cout << "Sorted List of Students by CGPA (Descending Order):\n";
    for (const Student& student : studentList) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}
