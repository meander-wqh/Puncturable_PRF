#ifndef PUNC_PRF_H
#define PUNC_PRF_H

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include "./GGM/GGMTree.h"

using namespace std;


class PuncPRF{
    private:
        static GGMTree* tree;
        static uint8_t *key;
        static unordered_map<long, uint8_t*> keys;
        static vector<GGMNode> node_list;
        static vector<GGMNode> remain_node;

    public:
        static void SetUp(uint8_t* key, int key_len);

        static void Punc(vector<long> delete_pos);

        //Eval前需要调用
        static void PPRF_compute_all_keys();

        static void PPRF_Eval(long msg);
};

#endif