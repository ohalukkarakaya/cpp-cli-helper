#include "../include/update_cmake_project_name.h"

void update_cmake_project_name(const std::filesystem::path &currentPath, const std::string &projectName)
{
    std::filesystem::path cmakeFilePath = currentPath / "CMakeLists.txt";

    std::ifstream cmakeFile(cmakeFilePath);
    if (!cmakeFile.is_open())
    {
        std::cerr << "CMakeLists.txt dosyası açılamadı : " << cmakeFilePath << std::endl;
        return;
    }

    std::string fileContent;
    std::string line;
    while (std::getline(cmakeFile, line))
    {
        // PROJECT_NAME ifadesini newProjectName ile değiştir
        size_t pos = line.find("PROJECT_NAME");
        if (pos != std::string::npos)
        {
            line.replace(pos, std::string("PROJECT_NAME").length(), projectName);
        }
        fileContent += line + "\n";
    }
    cmakeFile.close();

    // Dosyayı yeniden yazarak güncellenmiş içeriği kaydet
    std::ofstream outFile(cmakeFilePath);
    if (!outFile.is_open())
    {
        std::cerr << "CMakeLists.txt dosyası yazılamadı: " << cmakeFilePath << std::endl;
        return;
    }
    outFile << fileContent;
    outFile.close();

    std::cout << "Proje ismi, " << projectName << " olarak ayarlandı." << std::endl;
}
