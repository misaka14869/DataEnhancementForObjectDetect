#include "../../include/file/ImageFinder.h"

namespace fs = std::filesystem;

std::vector<std::string> ImageFinder::findImageFiles(const std::string& basePath) {
    std::vector<std::string> imageFiles;

    // 获取绝对路径
    std::string absolutePath = fs::absolute(basePath).string();

    // 开始递归搜索
    findImageFilesRecursive(absolutePath, imageFiles);

    return imageFiles;
}

void ImageFinder::findImageFilesRecursive(const fs::path& currentPath, std::vector<std::string>& imageFiles) {
    // 正则表达式匹配常见的图片文件格式：jpg、jpeg、png、bmp
    std::regex imageFilePattern(".*\\.(jpg|jpeg|png|bmp)$", std::regex::icase);

    for (const auto& entry : fs::directory_iterator(currentPath)) {
        if (fs::is_regular_file(entry)) {
            std::string filePath = entry.path().string();
            if (std::regex_match(filePath, imageFilePattern)) {
                imageFiles.push_back(filePath);
            }
        } else if (fs::is_directory(entry)) {
            // 递归处理子文件夹
            findImageFilesRecursive(entry.path(), imageFiles);
        }
    }
}
