// Anisimov Vasiliy st129629@student.spbu.ru
// Home Assginment 2a

#include <iostream>
#include <fstream>
#include <string> // Include string for std::string
#include <sys/stat.h>

namespace assignment_2a {

  off_t file_size(const char *filename) {
    struct stat st;
    if (stat(filename, &st) == 0) 
      return st.st_size;
    return -1;
  }
  
  void reverse(){
    // Prompt for file path
    std::string inputFilePath;
    std::cout << "Path to the file: ";
    std::cin >> inputFilePath;

    off_t fileSize = file_size(inputFilePath.c_str());
    
    // Open file in binary mode and position at the end
    std::ifstream infile(inputFilePath, std::ios::binary | std::ios::ate);
    if (!infile) {
      std::cerr << "Error: Unable to open file \"" << inputFilePath << "\"\n";
      return;
    }

    // Create buffer
    char* buffer = new char[fileSize];

    // Read file into buffer
    if (!infile.read(buffer, fileSize)) {
      std::cerr << "Error: Unable to read file \"" << inputFilePath << "\"\n";
      delete[] buffer;
      return;
    }
    infile.close();

    // Reverse the buffer
    for (std::streamsize i = 0; i < fileSize / 2; ++i) {
        std::swap(buffer[i], buffer[fileSize - 1 - i]);
    }

    // Prepare output file path
    std::string outFilePath = "out_" + inputFilePath;

    // Write reversed buffer to output file
    std::ofstream outfile(outFilePath, std::ios::binary);
    if (!outfile) {
      std::cerr << "Error: Unable to create file \"" << outFilePath << "\"\n";
      delete[] buffer;
      return;
    }
    outfile.write(buffer, fileSize);
    outfile.close();

    // Clean up
    delete[] buffer;

    std::cout << "File reversed successfully and written to \"" << outFilePath << "\"\n";
  }
}
