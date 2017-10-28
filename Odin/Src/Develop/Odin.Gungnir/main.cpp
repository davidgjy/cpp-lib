#include <iostream>
#include "TestBase.h"
#include "Core/FindCharTest.h"
#include "Core/ContainerTest.h"
#include "Fundamental/IO/StringStreamTest.h"
#include "Fundamental/IO/FileStreamTest.h"
#include "DS/IntListTest.h"
#include "DS/InsertionSortTest.h"
#include "Sample/Employee/EmployeeNoDbTest.h"
#include "Sample/Employee/EmployeeDbTest.h"
#include "Sample/SpreadSheet/SpreadSheetCellInStackTest.h"
#include "Sample/SpreadSheet/SpreadsheetTest.h"
#include "Stl/Alg/VectorAlgTest.h"
#include "Stl/Alg/CopyTest.h"
#include "Stl/Alg/RemoveTest.h"
#include "Stl/Alg/FuncParamTest.h"
#include "Stl/Alg/PredicateTest.h"
#include "Stl/Alg/LambdaTest.h"
#include "Stl/Alg/FuncObjectTest.h"
#include "Stl/Iter/InsertIteratorTest.h"
#include "Stl/Iter/StreamIteratorTest.h"
#include "Stl/Container/ArrayTest.h"
#include "Stl/Container/VectorTest.h"
#include "Stl/Container/DequeTest.h"
#include "Stl/Container/ListTest.h"
#include "Stl/Container/ForwardListTest.h"
#include "Stl/Container/SetTest.h"
#include "Stl/Container/MultiSetTest.h"
#include "Stl/Container/MapTest.h"
#include "Stl/Container/MapAdvanceTest.h"
#include "Stl/Container/UnorderedSetTest.h"
#include "Algorithm/SorterTest.h"

using namespace std;
using std::string;

#define FUNC_LENGTH 50

void versionInfo()
{
	cout << "---------------------------------------------" << endl;
	cout << "--  Odin Gungnir v1.0" << endl;
	cout << "--  Author:      Master HaKu" << endl;
	cout << "--  Copy Right:  2015" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "\n" << endl;
}

TestBase* testRunner()
{
	string func;

	cout << "Please Input Function Name To Test:" << endl;
	getline(cin, func);

	/* Core */
	if (func == "s_fc")
	{
		return new FindCharTest("s_fc", "Core -- Find Char Test");
	}
	if (func == "stl_container_test")
	{
		return new ContainerTest("stl_container_test", "Core -- STL Container Test");
	}

	/* C++ Fundamental */
	if (func == "cpp_funda_string_stream_test")
	{
		return new StringStreamTest("cpp_funda_string_stream_test", "Cpp Fundamental -- String Stream Test");
	}
	if (func == "cpp_funda_file_stream_test")
	{
		return new FileStreamTest("cpp_funda_file_stream_test", "Cpp Fundamental -- File Stream Test");
	}

	/* STL */

	// container
	if (func == "stl_cont_array_test")
	{
		return new ArrayTest("stl_cont_array_test", "STL -- Container Array Test");
	}
	if (func == "stl_cont_vector_test")
	{
		return new VectorTest("stl_cont_vector_test", "STL -- Container Vector Test");
	}
	if (func == "stl_cont_deque_test")
	{
		return new DequeTest("stl_cont_deque_test", "STL -- Container Deque Test");
	}
	if (func == "stl_cont_list_test")
	{
		return new ListTest("stl_cont_list_test", "STL -- Container List Test");
	}
	if (func == "stl_cont_forward_list_test")
	{
		return new ForwardListTest("stl_cont_forward_list_test", "STL -- Container Forward List Test");
	}
	if (func == "stl_cont_set_test")
	{
		return new SetTest("stl_cont_set_test", "STL -- Container Set Test");
	}
	if (func == "stl_cont_multiset_test")
	{
		return new MultiSetTest("stl_cont_multiset_test", "STL -- Container MultiSet Test");
	}
	if (func == "stl_cont_map_test")
	{
		return new MapTest("stl_cont_map_test", "STL -- Container Map Test");
	}
	if (func == "stl_cont_map_advance_test")
	{
		return new MapAdvanceTest("stl_cont_map_advance_test", "STL -- Container Map Advance Test");
	}
	if (func == "stl_cont_unordered_set_test")
	{
		return new UnorderedSetTest("stl_cont_unordered_set_test", "STL -- Container Unordered Set Test");
	}

	// algorithm
	if (func == "stl_alg_vector_test")
	{
		return new VectorAlgTest("stl_alg_vector_test", "STL -- Algorithm Vector Test");
	}
	if (func == "stl_alg_copy_test")
	{
		return new CopyTest("stl_alg_copy_test", "STL -- Algorithm Copy Test");
	}
	if (func == "stl_alg_remove_test")
	{
		return new RemoveTest("stl_alg_remove_test", "STL -- Algorithm Remove Test");
	}
	if (func == "stl_alg_func_param_test")
	{
		return new FuncParamTest("stl_alg_func_param_test", "STL -- Algorithm FuncParam Test");
	}
	if (func == "stl_alg_predicate_test")
	{
		return new PredicateTest("stl_alg_predicate_test", "STL -- Algorithm Predicate Test");
	}
	if (func == "stl_alg_lambda_test")
	{
		return new LambdaTest("stl_alg_lambda_test", "STL -- Algorithm Lambda Test");
	}
	if (func == "stl_alg_func_object_test")
	{
		return new FuncObjectTest("stl_alg_func_object_test", "STL -- Algorithm Function Object Test");
	}

	// iterator
	if (func == "stl_iter_insert_test")
	{
		return new InsertIteratorTest("stl_iter_insert_test", "STL -- Iterator Insert Test");
	}
	if (func == "stl_iter_stream_test")
	{
		return new StreamIteratorTest("stl_iter_stream_test", "STL -- Iterator Stream Test");
	}

	/* Data Structure */
	if (func == "ds_int_list")
	{
		return new IntListTest("ds_int_list", "Data Structure -- Int List Test");
	}
	if (func == "ds_insertion_sort")
	{
		return new InsertionSortTest("ds_insertion_sort", "Data Structure -- Insertion Sort");
	}

	/* Sample */
	if (func == "smp_emp_nodb")
	{
		return new EmployeeNoDbTest("smp_emp_nodb", "Sample -- Employee No Db");
	}
	if (func == "smp_emp_db")
	{
		return new EmployeeDbTest("smp_emp_db", "Sample -- Employee Db");
	}
	if (func == "smp_ssc_stack")
	{
		return new SpreadSheetCellInStackTest("smp_ssc_stack", "Sample -- Spread Sheet Cell In Stack");
	}
	if (func == "smp_sst")
	{
		return new SpreadsheetTest("smp_sst", "Sample -- Spread Sheet Test");
	}
	
	/* Algorithm */
	if (func == "algorithm_sorter_test")
	{
		return new SorterTest("algorithm_sorter_test", "Algorithm -- Sorter Test");
	}

	return nullptr;
}

int main(int argc, char* argv[])
{
	versionInfo();

	TestBase *test = nullptr;

	test = testRunner();

	if (test != nullptr)
	{
		test->getDesp();
		test->run();
	}

	delete test;

	return 0;
}

