set(
    SOURCE_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/yourproject.h"  # <--
    # "${CMAKE_CURRENT_SOURCE_DIR}/other_1.h"
    # "${CMAKE_CURRENT_SOURCE_DIR}/other_2.h"
    # ...
)
set(RELATIVE_PATH "include/yourproject")

if(SOURCE_FILES)
    target_sources("${PROJECT_NAME}" PRIVATE ${SOURCE_FILES})

    install(FILES ${SOURCE_FILES} DESTINATION ${RELATIVE_PATH})
endif()
