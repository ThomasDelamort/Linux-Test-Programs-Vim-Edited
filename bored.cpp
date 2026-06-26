#include <iostream>

int main () {
    
    int numberOfCourses = 0;
    double grade;
    double sum;
    double gwa;


    std::cout << "<>===<> GWA CALCULATOR <>===<>" << std::endl;

    
    std::cout << "\nHow many Courses: ";
    std::cin >> numberOfCourses;
    double grades[numberOfCourses];
    

    for (int i = 0; i < numberOfCourses; i++){
        std::cout << "Course " << i+1 << ": ";
	std::cin >> grade;	
	grades[i] = grade;
    }
    
    for (auto grade : grades) {
	sum += grade;
    }

    gwa = sum /  numberOfCourses;
    std::cout << "\nYour GWA is: " << gwa;

    return 0;
}
