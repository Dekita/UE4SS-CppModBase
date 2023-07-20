cmake_minimum_required(VERSION 3.18)

set(TARGET AwesomeModExample)
project(${TARGET})

add_library(${TARGET} SHARED "dllmain.cpp" "Source/Kore.cpp" "Source/Utils.cpp")
target_include_directories(${TARGET} PRIVATE .)

#target_link_libraries(${TARGET} PRIVATE File JSON Input)
target_link_libraries(${TARGET} PUBLIC cppsdk xinput1_3)

# copy output dll to steam hogwarts legacy ue4ss cpp mod directory for testing
set(GameDir "D:/SteamLibrary/steamapps/common/Hogwarts Legacy")
set(ModPath "Phoenix/Binaries/Win64/Mods/DekitaRPG/dlls")
set(OutPath "${GameDir}/${ModPath}/main.dll")
add_custom_command(TARGET ${TARGET} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:${TARGET}> ${OutPath}
)
