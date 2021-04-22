set(
    SUBDIRECTORIES 
    "yourproject"  # <--
    # ...
)

foreach(VAR ${SUBDIRECTORIES})
    add_subdirectory(${VAR})
endforeach()
