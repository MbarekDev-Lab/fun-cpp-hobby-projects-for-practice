#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{

    // float floatValue = 76,4; // This will cause a compilation error due to the comma. It should be a dot for decimal values. Value: 76.400002
    float floatValue = 76.4;                                          // Corrected to use a dot for the decimal value. Value: 76.400002
    double doubleValue = 76.4;                                        // This will store the value as a double, which has higher precision than float. Value: 76.400000000000006
    cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;   // This will print the size of the float type in bytes. sizeof(float): 4 bytes
    cout << "sizeof(double): " << sizeof(double) << " bytes" << endl; // This will print the size of the double type in bytes. sizeof(double): 8 bytes

    cout << "fixed: " << setprecision(20) << fixed << floatValue << endl; // This will print the value in fixed-point notation with a precision of 20 decimal places. fixed: 76.40000152587890625000 ,
    // note! 152587890625000 is garbage value, it is the result of the way floating point numbers are represented in binary, which can lead to precision issues. The actual value stored in the float variable is 76.40000152587890625,
    // but when printed with a precision of 20 decimal places, it may show as 76.40000152587890625000 due to the limitations of floating-point representation.

    cout << "scientific: " << setprecision(20) << scientific << floatValue << endl; // This will print the value in scientific notation with a precision of 20 decimal places. scientific: 7.64000015258789062500e+01

    cout << "Value: " << fixed << floatValue << endl;      // This will print the value with the default precision (6 decimal places).
    cout << "Value: " << scientific << floatValue << endl; // This will print the value in scientific notation. Value: 7.640000e+01

    cout << setprecision(20) << "Double Value: " << doubleValue << endl; // This will print the value (7.64000000000000056843e+01) of doubleValue with a precision of 20 decimal places. Value: 76.40000000000000600000

    cout << "Max float value: " << numeric_limits<float>::max() << endl;     // This will print the maximum finite value representable by the float type. Max float value: 3.40282e+38
    cout << "Max double value: " << numeric_limits<double>::max() << endl;   // This will print the maximum finite value representable by the double type. Max double value: 1.79769e+308
    float fValue = 123.456789;                                               // Corrected to use a dot for the decimal value. Value: 123.456787
    double dValue = 123.456789;                                              // This will store the value as a double, which has higher precision than float. Value: 123.456789000000003
    cout << "Float Value: " << fixed << setprecision(20) << fValue << endl;  // This will print the value of fValue with a precision of 20 decimal places. Float Value: 123.45678710937500000000
    cout << "Double Value: " << fixed << setprecision(20) << dValue << endl; // This will print the value of dValue with a precision of 20 decimal places. Double Value: 123.45678900000000055570


    // for finance, we often use long double to represent monetary values, as it provides higher precision than float and double. However, it's important to note that even long double may not be sufficient for all financial calculations, especially when dealing with very large or very small numbers, or when performing a large number of calculations that can accumulate rounding errors. In such cases, i
    // it may be necessary to use specialized libraries or data types designed for financial calculations, such as fixed-point arithmetic or arbitrary-precision arithmetic libraries.
    long double ldValue = 123.456789875656585284862;                               // This will store the value as a long double, which has higher precision than both float and double. Value: 123.45678987565658528486200000000000000000
    cout << "Long Double Value: " << fixed << setprecision(20) << ldValue << endl; // This will print the value of ldValue with a precision of 20 decimal places. Long Double Value: 123.4567898756565852848600000000000000000 (123.45678987565658246695)
    cout << "Max long double value: " << numeric_limits<long double>::max() << endl; // This will print the maximum finite value representable by the long double type. Max long double value: 1.18973e+4932 (179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.00000000000000000000)
    cout << "Min long double value: " << numeric_limits<long double>::min() << endl; // This will print the minimum positive normalized value representable by the long double type. Min long double value: 3.3621e-4932 (3.3621e-4932) (0.00000000000000000000)

    cout << " Size of long double: " << sizeof(ldValue) << " bytes" << endl; // This will print the size of the long double type in bytes. Size of long double: 16 bytes (on most platforms, but it can vary) but on my Mac  Size of long double: 8 bytes


    // Note: The precision of floating point numbers can lead to unexpected results, especially when performing arithmetic operations or when comparing values. It's important to be aware of these limitations and to use appropriate techniques, such as setting a tolerance for comparisons or using specialized libraries for high-precision calculations, when working with floating-point numbers in C++.
    // In summary, when working with floating point numbers in C++, it's important to be aware of the precision limitations of the different types (float, double, long double)
    // and to choose the appropriate type based on the requirements of your application. For financial calculations, using long double or specialized
    // libraries can help mitigate precision issues, but it's always important to consider the specific needs of your application and to test for potential edge cases that may arise due to floating-point representation.

    return 0;
}

/*
benraiss@MacBookAir learnCpp % g++ main.cpp Person.cpp -o main && ./main
sizeof(float): 4 bytes
sizeof(double): 8 bytes
fixed: 76.40000152587890625000
scientific: 7.64000015258789062500e+01
Value: 76.40000152587890625000
Value: 7.64000015258789062500e+01
Double Value: 7.64000000000000056843e+01
Max float value: 3.40282346638528859812e+38
Max double value: 1.79769313486231570815e+308
Float Value: 123.45678710937500000000
Double Value: 123.45678900000000055570
Long Double Value: 123.45678987565658246695
Max long double value: 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.00000000000000000000
Min long double value: 0.00000000000000000000
 Size of long double: 8 bytes
benraiss@MacBookAir learnCpp % 

*/