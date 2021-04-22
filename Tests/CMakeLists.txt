add_executable("tester" "test.c")
target_link_libraries("tester" PRIVATE YourProject::yourproject)

add_test(
    NAME    "Test_01"
    COMMAND "tester"
)
