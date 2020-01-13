//
// Created by Aditya Rana on 13-01-2020.
//

#ifndef BUNK_PLANNER_SUBJECT_H
#define BUNK_PLANNER_SUBJECT_H

#include <iostream>

class Subject {
public:
    Subject();
    std::string get_name_of_subject();
    static void set_min_attendance_percentage(int);
    void add_class_attended();
    void add_class_missed();
    void calc_percent_attendance();
    double get_percent_attendance();
private:
    static int min_attendance_percentage;
    std::string name_of_subject;
    unsigned num_of_classes;
    unsigned num_of_classes_attended;
    double percent_of_attendance;
};

int Subject::min_attendance_percentage = 0;

#endif //BUNK_PLANNER_SUBJECT_H
