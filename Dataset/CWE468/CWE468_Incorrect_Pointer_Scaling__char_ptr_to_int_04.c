/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04.c
Label Definition File: CWE468_Incorrect_Pointer_Scaling.label.xml
Template File: point-flaw-04.tmpl.c
*/
/*
 * @description
 * CWE: 468 Incorrect Pointer Scaling
 * Sinks: char_ptr_to_int
 *    GoodSink: Correctly use sizeof() for pointer scaling
 *    BadSink : Do not use sizeof() in pointer scaling
 * Flow Variant: 04 Control flow: if(STATIC_CONST_TRUE) and if(STATIC_CONST_FALSE)
 *
 * */

#include "std_testcase.h"

/* The two variables below are declared "const", so a tool should
   be able to identify that reads of these will always return their
   initialized values. */
static const int STATIC_CONST_TRUE = 1; /* true */
static const int STATIC_CONST_FALSE = 0; /* false */

#ifndef OMITBAD

void CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; /* get a char pointer to intArray - common idiom in file and network packet parsing */
            /* get intArray[2] */
            /* FLAW: sizeof() needed since pointer is a char*, not an int* */
            int toPrint = (int) (*(charPointer+2));
            printIntLine(toPrint);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* good1() uses if(STATIC_CONST_FALSE) instead of if(STATIC_CONST_TRUE) */
static void good1()
{
    if(STATIC_CONST_FALSE)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; /* get a char pointer to intArray - common idiom in file and network packet parsing */
            /* get intArray[2] */
            /* FIX: add *sizeof(int) to account for the difference in pointer types */
            int toPrint = (int) (*(charPointer+(2*sizeof(int))));
            printIntLine(toPrint);
        }
    }
}

/* good2() reverses the bodies in the if statement */
static void good2()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; /* get a char pointer to intArray - common idiom in file and network packet parsing */
            /* get intArray[2] */
            /* FIX: add *sizeof(int) to account for the difference in pointer types */
            int toPrint = (int) (*(charPointer+(2*sizeof(int))));
            printIntLine(toPrint);
        }
    }
}

void CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_good()
{
    good1();
    good2();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE468_Incorrect_Pointer_Scaling__char_ptr_to_int_04_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
