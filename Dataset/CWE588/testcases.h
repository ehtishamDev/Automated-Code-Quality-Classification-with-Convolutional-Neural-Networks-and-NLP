// NOTE - eventually this file will be automatically updated using a Perl script that understand
// the naming of test case files, functions, and namespaces.

#ifndef _TESTCASES_H
#define _TESTCASES_H

#ifdef __cplusplus
extern "C" {
#endif

// declare C good and bad functions
#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_41_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_52_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_01_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_51_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_13_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_32_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_63_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_54_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_11_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_17_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_07_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_16_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_02_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_10_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_08_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_14_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_05_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_04_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_64_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_03_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_45_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_18_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_53_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_31_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_09_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_06_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_44_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_12_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_66_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_34_good();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_15_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_41_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_52_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_01_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_51_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_13_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_32_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_63_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_54_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_11_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_17_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_07_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_16_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_02_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_65_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_10_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_08_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_14_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_05_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_68_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_04_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_64_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_03_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_45_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_18_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_53_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_31_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_09_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_06_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_44_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_12_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_66_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_67_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_34_bad();

	void CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_15_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD

#ifdef __cplusplus
} // end extern "C"
#endif

#ifdef __cplusplus
// declare C++ namespaces and good and bad functions

#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */
	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_81 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_74 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_72 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_44 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_05 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_68 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_34 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_16 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_67 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_11 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_08 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_73 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_15 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_54 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_63 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_12 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_81 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_14 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_01 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_52 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_03 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_02 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_31 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_64 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_51 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_82 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_32 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_74 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_07 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_17 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_18 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_10 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_53 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_73 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_41 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_65 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_72 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_04 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_66 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_82 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_13 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_06 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_09 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_33 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_45 { void good();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_33 { void good();}

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */
	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_81 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_74 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_72 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_44 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_05 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_68 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_34 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_16 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_67 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_11 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_08 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_73 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_15 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_54 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_63 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_12 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_81 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_14 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_01 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_52 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_03 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_02 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_31 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_64 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_51 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_82 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_32 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_74 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_07 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_17 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_18 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_10 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_53 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_73 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_41 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_65 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_72 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_04 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_66 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_82 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_13 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_06 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_09 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__struct_33 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_45 { void bad();}

	namespace CWE588_Attempt_to_Access_Child_of_Non_Structure_Pointer__class_33 { void bad();}

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD


#endif // __cplusplus


#endif //  _TESTCASES_H
