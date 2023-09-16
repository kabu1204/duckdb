//
// Created by ycy on 9/16/23.
//

#ifndef DUCKDB_ERRLOG_H
#define DUCKDB_ERRLOG_H

#define DEBUG_PRINT(fmt, ...) \
	do { if (DEBUG) fprintf(stderr, "[DEBUG]<%s:%s> " fmt "\n", __FILE__, __func__, __VA_ARGS__); } while (0);

#endif // DUCKDB_ERRLOG_H
