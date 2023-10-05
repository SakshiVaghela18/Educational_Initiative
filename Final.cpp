#include <iostream>
#include <vector>
#include <unordered_map>

// Class definitions

class Classroom {
public:
    Classroom(const std::string& name) : name(name) {}

    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};

class Student {
public:
    Student(int id, const std::string& className) : id(id), className(className) {}

    int getId() const {
        return id;
    }

    const std::string& getClassName() const {
        return className;
    }

private:
    int id;
    std::string className;
};

class Assignment {
public:
    Assignment(const std::string& className, const std::string& details)
        : className(className), details(details) {}

    const std::string& getClassName() const {
        return className;
    }

    const std::string& getDetails() const {
        return details;
    }

private:
    std::string className;
    std::string details;
};

// Virtual Classroom Manager

class VirtualClassroomManager {
public:
    // Classroom management
    void addClassroom(const std::string& className) {
        classrooms.emplace_back(className);
        std::cout << "Classroom '" << className << "' has been created.\n";
    }

    // Student management
    void addStudent(int studentId, const std::string& className) {
        students.emplace_back(studentId, className);
        std::cout << "Student " << studentId << " has been enrolled in " << className << ".\n";
    }

    // Assignment management
    void scheduleAssignment(const std::string& className, const std::string& details) {
        assignments.emplace_back(className, details);
        std::cout << "Assignment for " << className << " has been scheduled.\n";
    }

    void submitAssignment(int studentId, const std::string& className, const std::string& details) {
        std::cout << "Assignment submitted by Student " << studentId << " in " << className << ".\n";
    }

private:
    std::vector<Classroom> classrooms;
    std::vector<Student> students;
    std::vector<Assignment> assignments;
};

// Main function

int main() {
    VirtualClassroomManager manager;

    // Sample usage
    manager.addClassroom("Math");
    manager.addStudent(1, "Math");
    manager.scheduleAssignment("Math", "Solving equations");
    manager.submitAssignment(1, "Math", "Solving equations");

    return 0;
}
