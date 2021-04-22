set(
    SOURCE_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/yourproject.c"  # <--
    # "${CMAKE_CURRENT_SOURCE_DIR}/other_1.c"
    # "${CMAKE_CURRENT_SOURCE_DIR}/other_2.c"
    # ...
)
set(RELATIVE_PATH "src/yourproject")

if(SOURCE_FILES)
    target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

    install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()

