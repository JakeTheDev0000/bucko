#include <iostream>
#include <fstream>

int testEnv() {
    // file handles
    // std::cout << "hello from testEnv!!" << std::endl;

    //std::ofstream fileMine("bucks.txt");
    //fileMine << "its this is the only way to edit files";
    //fileMine.close();

    //std::ifstream MyReadFile("bucks.txt");

    //std::string myText;
    //getline(MyReadFile, myText);
    //std::cout << myText << std::endl;
    //MyReadFile.close();

    std::cout << "welcome to testEnv!!" << std::endl;

    std::ofstream bucksFileWrite("bucks.txt");
    std::ifstream bucksFileRead("bucks.txt");
    std::string bucksFileReadTmp;

    bucksFileWrite << "number 21";

    while(getline(bucksFileRead, bucksFileReadTmp)) {
        std::cout << bucksFileReadTmp << std::endl;
    }

    bucksFileRead.close();
    bucksFileWrite.close();
    return 0;

    // Create a text string, which is used to output the text file
    //string myText;

    // Read from the text file
    //ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    //while (getline (MyReadFile, myText)) {
    // Output the text from the file
    //cout << myText;
    //}
}

int main() {
    std::cout << "starting..." << std::endl;
    testEnv();
    return 0;

    int optionOnWhatTodo;
    std::cout << "what would you like todo\n[1] start\n[2] options\n[3] exit\n\n";
    std::cin >> optionOnWhatTodo;

    if (optionOnWhatTodo == 1) {

    }
    else if (optionOnWhatTodo == 2) {
        std::cout << "there's no options!!" << std::endl;
    }
    else if (optionOnWhatTodo == 3) {
        return 0;
    }
    else {
        std::cout << "number " << optionOnWhatTodo << "is not an option!" << std::endl;
    }


    return 0;
}


  // Create and open a text file
  // ofstream MyFile("filename.txt");

  // Write to the file
  // MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  // MyFile.close();
