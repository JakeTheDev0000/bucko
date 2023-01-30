#include <iostream>
#include <fstream>

std::string version = "0.0.2";

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

int showGameMenuTitle() {
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

int showGameDevSplash() {
// ___ ___   ___ ____________ __  ____  ____ ___ ___   ___
// |   |   | /  _] ___/ ___/  |  |/    |/    |   |   | /  _]
// | _   _ |/  [(   \(   \_|  |  |   __|  o  | _   _ |/  [_
// |  \_/  |    _]__  \__  |  ~  |  |  |     |  \_/  |    _]
// |   |   |   [_/  \ /  \ |___, |  |_ |  _  |   |   |   [_
// |   |   |     \    \    |     |     |  |  |   |   |     |
// |___|___|_____|\___|\___|____/|___,_|__|__|___|___|_____|

    std::cout << "Made By..." << std::endl;
    std::cout << R"( ___ ___   ___ ____________ __  ____  ____ ___ ___   ___
|   |   | /  _] ___/ ___/  |  |/    |/    |   |   | /  _]
| _   _ |/  [(   \(   \_|  |  |   __|  o  | _   _ |/  [_
|  \_/  |    _]__  \__  |  ~  |  |  |     |  \_/  |    _]
|   |   |   [_/  \ /  \ |___, |  |_ |  _  |   |   |   [_
|   |   |     \    \    |     |     |  |  |   |   |     |
|___|___|_____|\___|\___|____/|___,_|__|__|___|___|_____|
)";
    std::cout << "            productions" << std::endl;

    std::cout << "\n\nBuck-O version " << version << std::endl;

    system("sleep 1;clear");

}

int optionRun() {
    system("clear");
    int optionOnWhatTodo;
    std::cout << "Buck-O version " << version << std::endl;
    std::cout << "\n\nwhat would you like todo?\n[1] reset the bucks\n[2] no noise\n[3] exit\n\nEnter your option here! : ";
    std::cin >> optionOnWhatTodo;

    switch(optionOnWhatTodo) {
        case 1:
            std::cout << "reseted the bucks to 0!"<< std::endl;
            break;
        case 2:
            std::cout << "there will be no more noise" << std::endl;
            break;
        case 3:
            return 0;
            break;
        default:
            std::cout << "thats not an option!" << std::endl;
    }
}

int gameRun() {
    std::cout << "starting game..." << std::endl;
    system("sleep 0.2s;clear");
    // main Game here \/ \/

    std::cout << "theres no game here- yet..." << std::endl;

    std::exit(41);

}

int main() {
    showGameDevSplash();
    int optionOnWhatTodo;
    do {
        showGameMenuTitle();

        std::cout << "\n\nwhat would you like todo?\n[1] start\n[2] options\n[3] exit\n\nEnter your option here! : ";
        std::cin >> optionOnWhatTodo;

        if (optionOnWhatTodo == 1) {
            gameRun();
        }
        else if (optionOnWhatTodo == 2) {
            optionRun();
            system("sleep 0.6s;clear");
        }
        else if (optionOnWhatTodo == 3) {
            system("clear;(speaker-test -t sine -f 650)& pid=$!;clear; sleep 0.2s; kill -9 $pid");
            system("clear;(speaker-test -t sine -f 740)& pid=$!;clear; sleep 0.07s; kill -9 $pid");
            system("clear;(speaker-test -t sine -f 1000)& pid=$!;clear; sleep 0.1s; kill -9 $pid");
            system("clear");
            showGameDevSplash();
            return 0;
        }
        else {
            std::cout << "number " << optionOnWhatTodo << " is not an option!" << std::endl;
        }
    }
    while(optionOnWhatTodo != 1||optionOnWhatTodo != 2||optionOnWhatTodo != 3);

    return 0;
}


  // Create and open a text file
  // ofstream MyFile("filename.txt");

  // Write to the file
  // MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  // MyFile.close();

  //! cant have to instances open at the same time!!!
