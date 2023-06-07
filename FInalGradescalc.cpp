#include <iostream>

// Function to calculate the preliminary grade
double calculatePrelimGrade(double prelimScore)
{
    return prelimScore * 0.3;
}

// Function to calculate the midterm grade
double calculateMidtermGrade(double midtermScore)
{
    return midtermScore * 0.3;
}

// Function to calculate the final grade
double calculateFinalGrade(double finalScore)
{
    return finalScore * 0.4;
}

// Function to calculate the overall grade
double calculateOverallGrade(double prelimGrade, double midtermGrade, double finalGrade)
{
    return prelimGrade + midtermGrade + finalGrade;
}

int main()
{
    double prelimScore, midtermScore, finalScore;

    // Get preliminary score from the user
    std::cout << "Enter your preliminary score: ";
    std::cin >> prelimScore;

    // Get midterm score from the user
    std::cout << "Enter your midterm score: ";
    std::cin >> midtermScore;

    // Get final score from the user
    std::cout << "Enter your final score: ";
    std::cin >> finalScore;

    // Calculate grades using the user-defined functions
    double prelimGrade = calculatePrelimGrade(prelimScore);
    double midtermGrade = calculateMidtermGrade(midtermScore);
    double finalGrade = calculateFinalGrade(finalScore);
    double overallGrade = calculateOverallGrade(prelimGrade, midtermGrade, finalGrade);

    // Display the results
    std::cout << "Preliminary Grade: " << prelimGrade << std::endl;
    std::cout << "Midterm Grade: " << midtermGrade << std::endl;
    std::cout << "Final Grade: " << finalGrade << std::endl;
    std::cout << "Overall Grade: " << overallGrade << std::endl;

    return 0;
}

