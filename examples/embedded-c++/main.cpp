#include "duckdb.hpp"
#include <string>

// using namespace duckdb;

using namespace duckdb;

int main() {
	DuckDB db("/home/ycy/repo/duckdb/run/test.db");
	Connection con(db);
	std::string value;
	unique_ptr<MaterializedQueryResult> result;

	con.Query("CREATE TABLE test_tb(testcol VARCHAR)");

	for(int i=0; i< 5; i++) {
		value.assign("value"+std::to_string(i));
		con.Query("INSERT INTO test_tb VALUES ('" + value + "')");
	}
	
	result = con.Query("SELECT * FROM test_tb");
	value.assign(result->ToString());
	return 0;
}
