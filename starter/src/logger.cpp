#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
    if (size >= capacity)
    {
        throw std::string("Full");
    }
    labels[size] = label;
    values[size] = value;
    ++size;
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
    *valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    std::cout << label << ": " << value << std::endl;
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    if (size == 0)
    {
        throw std::string("Empty");
    }
    double s = 0.0;
    for (int i = 0; i < size; ++i)
    {
        s += values[i];
    }
    final = s / size
    return final;
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    if (size == 0)
    {
        throw std::string("Empty");
    }
    double min = values[0];
    for (int i = 1; i < size; ++i)
    {
        if (values[i] < min)
        {
            min = values[i];
        }
    }
    return min;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    if (size == 0)
    {
        throw std::string("Empty");
    }
    double maximum = values[0];
    for (int i = 1; i < size; ++i)
    {
        if (values[i] > maximum)
        {
            maximum = values[i];
        }
    }
    return maximum;
}
