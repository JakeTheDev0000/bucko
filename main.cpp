#include <iostream>
#include <fstream>

int testEnv() {
    std::cout << "welcome to testEnv!!" << std::endl;

    std::ofstream bucksFileWrite("bucks.txt");
    std::ifstream bucksFileRead("bucks.txt");
    std::string bucksFileReadTmp;

    bucksFileWrite << "number 21";

    bucksFileWrite.close();

    while (getline (bucksFileRead, bucksFileReadTmp)) {
        std::cout << bucksFileReadTmp << std::endl;
    }

    bucksFileRead.close();
    return 0;
}

int showGameDevSplash(int showMenuTitle) {
// ___ ___   ___ ____________ __  ____  ____ ___ ___   ___
// |   |   | /  _] ___/ ___/  |  |/    |/    |   |   | /  _]
// | _   _ |/  [(   \(   \_|  |  |   __|  o  | _   _ |/  [_
// |  \_/  |    _]__  \__  |  ~  |  |  |     |  \_/  |    _]
// |   |   |   [_/  \ /  \ |___, |  |_ |  _  |   |   |   [_
// |   |   |     \    \    |     |     |  |  |   |   |     |
// |___|___|_____|\___|\___|____/|___,_|__|__|___|___|_____|

    std::cout << R"( ___ ___   ___ ____________ __  ____  ____ ___ ___   ___
|   |   | /  _] ___/ ___/  |  |/    |/    |   |   | /  _]
| _   _ |/  [(   \(   \_|  |  |   __|  o  | _   _ |/  [_
|  \_/  |    _]__  \__  |  ~  |  |  |     |  \_/  |    _]
|   |   |   [_/  \ /  \ |___, |  |_ |  _  |   |   |   [_
|   |   |     \    \    |     |     |  |  |   |   |     |
|___|___|_____|\___|\___|____/|___,_|__|__|___|___|_____|
)";

    system("sleep 1;clear");
    if (showMenuTitle == 0) {
        return 0;
    }

    std::cout << "\n";
    std::cout << R"(▀█████████▄  ███    █▄   ▄████████    ▄█   ▄█▄          ▄██████▄
  ███    ███ ███    ███ ███    ███   ███ ▄███▀          ███    ███
  ███    ███ ███    ███ ███    █▀    ███▐██▀            ███    ███
 ▄███▄▄▄██▀  ███    ███ ███         ▄█████▀             ███    ███
▀▀███▀▀▀██▄  ███    ███ ███        ▀▀█████▄             ███    ███
  ███    ██▄ ███    ███ ███    █▄    ███▐██▄            ███    ███
  ███    ███ ███    ███ ███    ███   ███ ▀███▄          ███    ███
▄█████████▀  ████████▀  ████████▀    ███   ▀█▀           ▀██████▀
    )";

}

int gameRun() {
    std::cout << "starting game..." << std::endl;
}

int main() {
    showGameDevSplash(1);

    int optionOnWhatTodo;
    std::cout << "\n\nwhat would you like todo?\n[1] start\n[2] options\n[3] exit\n\n";
    std::cin >> optionOnWhatTodo;

    if (optionOnWhatTodo == 1) {
        gameRun();
    }
    else if (optionOnWhatTodo == 2) {
        std::cout << "there's no options!!" << std::endl;
    }
    else if (optionOnWhatTodo == 3) {
        system("clear;(speaker-test -t sine -f 650)& pid=$!;clear; sleep 0.2s; kill -9 $pid");
        system("clear;(speaker-test -t sine -f 740)& pid=$!;clear; sleep 0.07s; kill -9 $pid");
        system("clear;(speaker-test -t sine -f 1000)& pid=$!;clear; sleep 0.1s; kill -9 $pid");
        system("clear");
        showGameDevSplash(0);
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
