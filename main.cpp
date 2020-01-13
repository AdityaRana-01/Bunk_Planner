#include <iostream>
#include "Subject.h"
#define MAX_SUBJECTS 10

int take_input_of_subject();
void test_inputs();

int main() {
    unsigned min_attendance_criteria;
    std::cout << "Enter the minimum attendance criteria.\n";
    std::cin >> min_attendance_criteria;
    Subject::set_min_attendance_percentage(min_attendance_criteria);
    test_inputs();
    return 0;
}

int take_input_of_subject() {
    std::string name;
    unsigned count = 1;
    unsigned choice = 1;

    while(choice) {
        ++count;
        std::cout << "Adding one subject.\nEnter subject name\n";
        std::cin.ignore();
        std::getline(std::cin, name);
        if (count <= MAX_SUBJECTS) {
            std::cout << "Add another subject?\n0: No\n1: Yes\n";
            std::cin >> choice;
        }
    }
    return count;
}

void test_inputs() {
    Subject subjects[MAX_SUBJECTS];
    for(int i = 0; i < take_input_of_subject(); ++i) {
        std::cout << i << ". " << subjects[i].get_name_of_subject() << "\n";
    }
}
