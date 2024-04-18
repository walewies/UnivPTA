#include "Calculate.h"

double calculateContribution(double studentMark, int totalMark, double weight){
    return (studentMark / totalMark) * weight;
}

double calculateIndividualWeight(double totalWeight, int numAssessments){
    return totalWeight / numAssessments;
}
