#include <iostream>
#include <algorithm>
#include <unordered_map>
#include "./GGM/GGMTree.h"
#include "Punc_PRF.h"

using  namespace  std;

int main() {
    /*Setup  */
    uint8_t *key = (unsigned char*) "0123456789123456";
    PuncPRF::SetUp(key, 16);

    /*Punc */
    vector<long> delete_pos;
    delete_pos.emplace_back(1);
    PuncPRF::Punc(delete_pos);
    
    /*Eval */
    PuncPRF::PPRF_compute_all_keys();// precompute all keys of nodes
    PuncPRF::PPRF_Eval(1);
    PuncPRF::PPRF_Eval(2);
    PuncPRF::PPRF_Eval(0);

    return 0;
}
