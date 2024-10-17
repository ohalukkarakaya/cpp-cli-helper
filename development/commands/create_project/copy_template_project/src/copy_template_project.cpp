#include "../include/copy_template_project.h"

namespace fs = std::filesystem;

void copy_template_project(std::string &source, const std::string &destination)
{
    LocaleHelper localHelper;

    try
    {
        std::cout << "kaynak yolu:" << source << std::endl;
        // template_project içerisindeki dosyaları kopyala
        for (const auto &entry : fs::directory_iterator(source))
        {
            const auto &path = entry.path();
            auto dest_path = fs::path(destination) / path.filename();

            if (fs::is_directory(path))
            {
                fs::create_directories(dest_path);
                fs::copy(path, dest_path, fs::copy_options::recursive | fs::copy_options::overwrite_existing);
            }
            else
            {
                fs::copy(path, dest_path, fs::copy_options::overwrite_existing);
            }
        }
    }
    catch (const fs::filesystem_error &e)
    {
        std::cerr << localHelper.get_locale_value("error_copying_template_project") << e.what() << std::endl;
    }
}
