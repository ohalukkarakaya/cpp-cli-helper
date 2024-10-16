#ifndef LOCALHELPER_H
#define LOCALHELPER_H

#include <cstdlib>
#include <iostream>
#include <unordered_map>

#include "load_en_static_texts.h"
#include "load_tr_static_texts.h"

class LocaleHelper
{
  private:
    std::unordered_map<std::string, std::string> tr_static_texts;
    std::unordered_map<std::string, std::string> en_static_texts;

    std::string get_locale_lang_code();

  public:
    LocaleHelper();
    std::string get_locale_value(std::string key);
};

#endif // LOCALHELPER_H
