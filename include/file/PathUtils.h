#pragma once

#include <iostream>
#include <filesystem>
#include <vector>
#include <string>
#include <regex>

class ImageFinder {
public:
    // 静态函数：查找图片文件
    static std::vector<std::string> findImageFiles(const std::string& basePath);

private:
    // 递归查找图片文件的辅助函数
    static void findImageFilesRecursive(const std::filesystem::path& currentPath, std::vector<std::string>& imageFiles);
};
