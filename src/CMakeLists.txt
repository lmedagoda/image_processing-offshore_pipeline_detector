rock_library(offshore_pipeline_detector
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(offshore_pipeline_detector_bin Main.cpp
    DEPS offshore_pipeline_detector)

