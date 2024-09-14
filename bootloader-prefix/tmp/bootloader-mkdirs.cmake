# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/akhil/esp/esp-idf-v5.2.2/components/bootloader/subproject"
  "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader"
  "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix"
  "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix/tmp"
  "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix/src/bootloader-stamp"
  "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix/src"
  "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/akhil/Indevz/Micropython_Esp32/micropython/ports/esp32/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
