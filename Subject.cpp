//
// Created by Aditya Rana on 13-01-2020.
//

#include "Subject.h"

Subject::Subject() {
    name_of_subject = "";
    num_of_classes = 0;
    num_of_classes_attended = 0;
    percent_of_attendance = 0;
}

std::string Subject::get_name_of_subject() {
    return name_of_subject;
}

void Subject::set_min_attendance_percentage(int percentage) {
    Subject::min_attendance_percentage = percentage;
}

void Subject::add_class_attended() {
    ++num_of_classes_attended;
    ++num_of_classes;
    calc_percent_attendance();
}

void Subject::add_class_missed() {
    ++num_of_classes;
    calc_percent_attendance();
}

void Subject::calc_percent_attendance() {
    percent_of_attendance = num_of_classes_attended / num_of_classes;
}

double Subject::get_percent_attendance() {
    return percent_of_attendance;
}