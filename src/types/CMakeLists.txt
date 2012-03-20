set (SOURCES
    ${SOURCES}
    types/DataType.cpp
    types/DataValue.cpp
    types/DataArray.cpp
    types/DataTypeFactory.cpp
    types/Int8.cpp
    types/Int8Type.cpp
    types/Int8Value.cpp
    types/Int8Array.cpp
    PARENT_SCOPE
)

add_subdirectory(test)