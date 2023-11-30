#include <iostream>
#include <chrono>

void runWithO1() {
    auto start = std::chrono::high_resolution_clock::now();
    long count = 0;
    for (int i = 0; i < 100000000; i++) {
        count++;
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Thoi gian thuc thi truc tiep: " << duration.count() << " giay" << std::endl;
}

void runIf() {
    auto start = std::chrono::high_resolution_clock::now();
    long count = 0;
    for (int i = 0; i < 100000000; i++) {
        int x = 5;
        if (x == 0) {

        }
        else if (x == 1) {

        }
        else if (x == 2) {

        }
        else if (x == 3) {

        }
        else if (x == 4) {

        }
        else if (x == 5) {
            count++;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Thoi gian thuc thi voi if " << duration.count() << " giay" << std::endl;
}

void runSwitchCase() {
    auto start = std::chrono::high_resolution_clock::now();
    long count = 0;
    for (int i = 0; i < 100000000; i++) {
        int x = 5;
        switch (x)
        {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            count++;
            break;
        default:
            break;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;
    std::cout << "Thoi gian thuc thi voi switch case " << duration.count() << " giay" << std::endl;
}

int main() {
    runWithO1();
    runIf();
    runSwitchCase();
}
