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
    long double ldValue = 123.456789875656585284862;                                 // This will store the value as a long double, which has higher precision than both float and double. Value: 123.45678987565658528486200000000000000000
    cout << "Long Double Value: " << fixed << setprecision(20) << ldValue << endl;   // This will print the value of ldValue with a precision of 20 decimal places. Long Double Value: 123.4567898756565852848600000000000000000 (123.45678987565658246695)
    cout << "Max long double value: " << numeric_limits<long double>::max() << endl; // This will print the maximum finite value representable by the long double type. Max long double value: 1.18973e+4932 (179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.00000000000000000000)
    cout << "Min long double value: " << numeric_limits<long double>::min() << endl; // This will print the minimum positive normalized value representable by the long double type. Min long double value: 3.3621e-4932 (3.3621e-4932) (0.00000000000000000000)

    cout << " Size of long double: " << sizeof(ldValue) << " bytes" << endl; // This will print the size of the long double type in bytes. Size of long double: 16 bytes (on most platforms, but it can vary) but on my Mac  Size of long double: 8 bytes

    // Note: The precision of floating point numbers can lead to unexpected results, especially when performing arithmetic operations or when comparing values. It's important to be aware of these limitations and to use appropriate techniques, such as setting a tolerance for comparisons or using specialized libraries for high-precision calculations, when working with floating-point numbers in C++.
    // In summary, when working with floating point numbers in C++, it's important to be aware of the precision limitations of the different types (float, double, long double)
    // and to choose the appropriate type based on the requirements of your application. For financial calculations, using long double or specialized
    // libraries can help mitigate precision issues, but it's always important to consider the specific needs of your application and to test for potential edge cases that may arise due to floating-point representation.

    // boolean values (bool) can also be used in financial applications to represent true/false conditions, such as whether a transaction is valid, whether an account is active, or whether a certain condition has been met. However, it's important to note that boolean values do not have precision issues like floating-point numbers, as they can only represent two states: true (1) and false (0). Therefore, they are not typically used for representing monetary values or performing calculations, but rather for controlling the flow of logic in financial applications.

    bool isTransactionValid = true;                                                  // This boolean variable can be used to represent whether a transaction is valid or not. It can be used in conditional statements to control the flow of logic in financial applications.
    cout << "Is the transaction valid? " << boolalpha << isTransactionValid << endl; // This will print the value of isTransactionValid as "true" or "false" instead of 1 or 0. Is the transaction valid? true

    // char status = 'A';                            // This character variable can be used to represent the status of an account, such as 'A' for active, 'I' for inactive, or 'C' for closed. It can be used in conditional statements to control the flow of logic in financial applications.
    // cout << "Account status: " << status << endl; // This will print the value of the status variable. Account status: A

    char cValue = 71;                              // This will store the ASCII value of the character 'G', which is 71. Value: 71 and Character Value: G
    char cValue2 = 55;                            // This will store the ASCII value of the character '7', which is 55. Value: 55 and Character Value: 7            
    cout << "Character Value: " << cValue << endl;  // This will store the ASCII value of the character 'G', which is 71. Value: 71 and Character Value: G
    cout << "Character Value: " << cValue2 << endl; // This will print the value of cValue2, which is 55. Character Value: 7
    // why  71 Character Value: G 
    // Explanation: In C++, when you assign an integer value to a char variable, it is interpreted as an ASCII code. The ASCII code 71 corresponds to the character 'G'. Therefore, when you print cValue, it prints 'G' instead of 71.


    char cValue3 = 'g';                            // This will store the character 'g' directly in the char variable. Value: 103 and Character Value: g
    cout << "Character Value: " << cValue3 << endl; // This will print the value of cValue3, which is 'g'. Character Value: g
    // why 103 Character Value: g
    // Explanation: When you assign the character 'g' to a char variable, it is stored as its corresponding ASCII value, which is 103. Therefore, when you print cValue3, it prints 'g' instead of 103.

    cout << "Character Value: " << (int)(cValue3) << endl; // This will print the integer value of cValue3, which is 103. Character Value: 103
    // why 103 Character Value: 103
    // Explanation: When you cast the char variable cValue3 to an int, it will print the ASCII value of the character 'g', which is 103. Therefore, it prints 103 instead of 'g'.

    cout << "Character Value: " << static_cast<char>(cValue) << endl;  // This will print the character representation of the ASCII value stored in cValue. Character Value: G
    cout << "Character Value: " << (int)(cValue2) << endl; // This will print the integer value of cValue2, which is 55. Character Value: 55

    cout << " Size of char: " << sizeof(char) << " byte" << endl; // This will print the size of the char type in bytes. Size of char: 1 byte

    wchar_t wValue = L'G'; // This will store the wide character 'G' in a wchar_t variable. Value: 71 and Wide Character Value: G
    cout << "Wide Character Value: " << wValue << endl; // This will print the value of wValue, which is 'G'. Wide Character Value: G
    cout << " Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl; // This will print the size of the wchar_t type in bytes. Size of wchar_t: 4 bytes (on most platforms, but it can vary)

    /*
    Basic ASCII Table (0–127)
    Dec  Char   Dec  Char   Dec  Char   Dec  Char
    --------------------------------------------
    32   (space) 48   0     64   @     80   P
    33   !       49   1     65   A     81   Q
    34   "       50   2     66   B     82   R
    35   #       51   3     67   C     83   S
    36   $       52   4     68   D     84   T
    37   %       53   5     69   E     85   U
    38   &       54   6     70   F     86   V
    39   '       55   7     71   G     87   W
    40   (       56   8     72   H     88   X
    41   )       57   9     73   I     89   Y
    42   *       58   :     74   J     90   Z
    43   +       59   ;     75   K     91   [
    44   ,       60   <     76   L     92   \
    45   -       61   =     77   M     93   ]
    46   .       62   >     78   N     94   ^
    47   /       63   ?     79   O     95   _
    96   `       97   a     112  p     120  x
    98   b       99   c     113  q     121  y
    100  d       101  e     114  r     122  z
    102  f       103  g     115  s     123  {
    104  h       105  i     116  t     124  |
    106  j       107  k     117  u     125  }
    108  l       109  m     118  v     126  ~
    110  n       111  o     119  w     127  DEL


    Control Characters (0–31)
    0   NUL   1   SOH   2   STX   3   ETX
    4   EOT   5   ENQ   6   ACK   7   BEL
    8   BS    9   TAB   10  LF    11  VT
    12  FF    13  CR    14  SO    15  SI
    16  DLE   17  DC1   18  DC2   19  DC3
    20  DC4   21  NAK   22  SYN   23  ETB
    24  CAN   25  EM    26  SUB   27  ESC
    28  FS    29  GS    30  RS    31  US
    
    */

    return 0;
}

/*
    benraiss@Mbareks-MacBook-Air learnCpp % g++ main.cpp -o main && ./main
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
    Is the transaction valid? true
    Character Value: G
    Character Value: 7
    Character Value: g
    Character Value: 103
    Character Value: G
    Character Value: 55
    Size of char: 1 byte
    Wide Character Value: 71
    Size of wchar_t: 4 bytes
    benraiss@Mbareks-MacBook-Air learnCpp % 
*/