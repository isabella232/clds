#Copyright (c) Microsoft. All rights reserved.

cmake_minimum_required(VERSION 2.8.11)

compileAsC11()
set(theseTestsName mpsc_lock_free_queue_ut)

set(${theseTestsName}_test_files
${theseTestsName}.c
)

set(${theseTestsName}_c_files
../../src/mpsc_lock_free_queue.c
)

set(${theseTestsName}_h_files
../../inc/clds/mpsc_lock_free_queue.h
)

build_test_artifacts(${theseTestsName} ON "tests/clds" ADDITIONAL_LIBS c_pal c_pal_reals)
