cmake_minimum_required(VERSION 2.6)

project(astar)

file(
	GLOB_RECURSE
	source_files
	src/*
)

add_executable(
	astar_exe
	${source_files}
)
