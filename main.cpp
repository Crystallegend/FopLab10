#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

/* For TASK 3
class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double Area() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double Perimeter() {
        return side1 + side2 + side3;
    }

    void printDetails() {
        cout << "Triangle Details:" << endl;
        cout << "Area: " << Area() << " square meters" << endl;
        cout << "Perimeter: " << Perimeter() << " meters" << endl;
    }
};
*/

/* For TASK 4
struct Employee {
    std::string name;
    double salary;
    int hoursOfWork;

    Employee(string n, double s, int h) : name(n), salary(s), hoursOfWork(h) {}

    void increaseSalary() {
        if (hoursOfWork >= 12) {
            salary += 150;
        } else if (hoursOfWork >= 10) {
            salary += 100;
        } else if (hoursOfWork >= 8) {
            salary += 50;
        }
    }

    void printDetails() {
        cout << "Name: " << name << "\tFinal Salary: $" << salary << endl;
    }
};
*/

int main()
{

/* TASK 4

    Employee employees[10] = {
        {"Amad", 2000, 8},
        {"Zoraiz", 2500, 10},
        {"Hunzla", 3000, 9},
        {"Rayyan", 1800, 13},
        {"Shahzeb", 2800, 5},
        {"Mufassir", 1700, 16},
        {"Sibghat", 1900, 7},
        {"Ahmad", 2400, 4},
        {"Mannan", 4000, 3},
        {"Usman", 1700, 14},
    };

    for (int i = 0; i < 10; ++i) {
        employees[i].increaseSalary();
        employees[i].printDetails();
    }
*/

/* TASK 3
    Triangle myTriangle(3,4,5);
    myTriangle.printDetails();
*/

/* TASK 2
    int no_of_students, grade, temp;
    string name;
    vector<string> names;
    vector<int> grades;

    cout<<"Enter the number of Students: ";
    cin>>no_of_students;

    // Taking names and grades from the user
    for (int i=1; i<=no_of_students; i++) {
        cout<<"Enter name of Student "<<i<<" : ";
        cin>>name;
        cout<<"Enter grade of Student "<<i<<" : ";
        cin>>grade;
        names.push_back(name);
        grades.push_back(grade);
    }

    // Sorting the grades vector using Bubble Sort.
    // It will be useful while calculating median.
    for (int i=0; i<grades.size()-1; i++) {
        for (int j=0; j<grades.size()-1; j++) {
            if (grades[j]>grades[j+1]) {
                temp = grades[j];
                grades[j] = grades[j+1];
                grades[j+1] = temp;
            }
        }
    }

    // Calculating Mean
    double mean;
    for (auto i=grades.cbegin(); i != grades.cend(); i++)
        mean+=*i;
    mean /= grades.size();

    // Calculating Median
    double median;
    if (grades.size()%2 == 0)
        median = (double)(grades[grades.size()/2 - 1] + grades[grades.size()/2])/2.0;
    else
        median = (double) grades[grades.size()/2];

    // Calculating Mode
    int mode, current_num=grades[0], current_count=1, greatest_count=0;

    for (int i=1; i<grades.size(); i++) {
        if (grades[i]==current_num)
            current_count++;
        else {

            if (current_count>greatest_count) {
                greatest_count = current_count;
                current_count = 1;
                mode = current_num;
                current_num = grades[i];
            }
            else {
                current_count = 1;
                current_num = grades[i];
            }

        }
    }

    // Printing Requirements
    cout<<"Mean of the Grades: "<<mean<<endl;
    cout<<"Median of the Grades: "<<median<<endl;
    cout<<"Mode of the Grades: "<<mode<<endl;
    cout<<endl<<setw(10)<<"Names"<<setw(10)<<"Grades"<<endl;
    cout<<"--------------------"<<endl;
    for (int i=0; i<grades.size(); i++)
        cout<<setw(10)<<names[i]<<setw(10)<<mode<<endl;
*/


/* TASK 1
    // Pushing elements in the Vector
    vector<int> nums;
    for (int i=1; i<=10; i++)
        nums.push_back(i);

    // Printing pushed elements using iterators
    for (auto i=nums.begin(); i != nums.end(); ++i)
        cout<<*i<<endl;

    // Pushing integer 5
    nums.push_back(5);

    // Printing after Pushing
    cout<<"After pushing integer 5"<<endl;
    for (auto i=nums.begin(); i != nums.end(); ++i)
        cout<<*i<<endl;

    // Removing element at that position i.e. at position 5
    nums.erase(nums.cbegin()+4);

    // Printing after Removing
    cout<<"After Removing at position 5"<<endl;
    for (auto i=nums.begin(); i != nums.end(); ++i)
        cout<<*i<<endl;
*/
    return 0;
}
