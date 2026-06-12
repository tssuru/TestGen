#include "BaseCheckQuestFabric.h"
using namespace std;

BaseCheckQuestFabric::BaseCheckQuestFabric(unsigned nCase_, const string &before_,const string &after_,
                          CheckQuestion::PrintModes mode_, bool do_mix):
                QuestFabric(before_,after_), nCase(nCase_), mixer(nCase_, do_mix), mode(mode_) {
    if (nCase<2) throw invalid_argument("AnswerQuestFabricN question should have at least 2 cases");
}
