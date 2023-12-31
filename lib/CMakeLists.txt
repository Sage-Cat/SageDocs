project(SageDocsLib)

# third party
find_package(rapidcsv REQUIRED)
find_package(pugixml REQUIRED)

set(LIB_SOURCES
    ${LIB_SOURCES_DIR}/DataProcessorFactory.cpp
    ${LIB_SOURCES_DIR}/ReaderFactory.cpp
    ${LIB_SOURCES_DIR}/WriterFactory.cpp

    ${LIB_SOURCES_DIR}/DataProcessors/SimpleTableProcessor.cpp
    ${LIB_SOURCES_DIR}/DataProcessors/BesuglayaInvoiceProcessor.cpp
    ${LIB_SOURCES_DIR}/DataProcessors/OdooProductsProcessor.cpp
    ${LIB_SOURCES_DIR}/DataProcessors/OmegaInvoiceProcessor.cpp

    ${LIB_SOURCES_DIR}/Readers/CsvReader.cpp

    ${LIB_SOURCES_DIR}/Writers/CsvWriter.cpp
)

add_library(SageDocsLib ${LIB_SOURCES})

target_include_directories(SageDocsLib PUBLIC ${LIB_SOURCES_DIR})

target_link_libraries(SageDocsLib PRIVATE rapidcsv::rapidcsv pugixml::pugixml)
