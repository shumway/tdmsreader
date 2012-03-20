set (SOURCES
    ${SOURCES}
    types/DataType.cpp
    types/DataValue.cpp
    types/DataArray.cpp
    types/DataTypeFactory.cpp
    types/Int8.cpp
    types/Int8Value.cpp
    types/Int8Array.cpp
    types/Int16.cpp
    types/Int16Value.cpp
    types/Int16Array.cpp
    types/Int32.cpp
    types/Int32Value.cpp
    types/Int32Array.cpp
    PARENT_SCOPE
)

add_subdirectory(test)