#pragma once
#include "VariantFabric.h"
#include <string>
#include <memory>

/*  генератор контрольной работы в целом

задаем полный путь выходного файла,
файл со скриптом и при необходимости рабочий каталог
(все упоминаемые в скрипте файлы будут открываться именно как файлы этого рабочего каталога)
*/
class VarBuilder;
class ScriptInterpreter{
protected:
    std::string header, footer;
    unsigned from=1, to=1;
    unsigned from2=10000, to2=9999;
    unsigned int onPage=1;
    std::string onNextVariant, onNextPage;
    std::unique_ptr<VariantFabric> vf;
    friend class VarBuilder;
public:
    void doScript(const std::string &dest, const std::string &script, const std::string &workdir="");
};
