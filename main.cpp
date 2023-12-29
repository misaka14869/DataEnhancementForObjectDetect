#include "include/file/PathUtils.h"

int main() {
    std::string inputPath = "../datasets";  // 请替换成你的输入路径

    std::vector<std::string> imageFiles = ImageFinder::findImageFiles(inputPath);

    std::cout << "Image files found:" << std::endl;
    for (const auto& filePath : imageFiles) {
        std::cout << filePath << std::endl;
    }

    return 0;
}
