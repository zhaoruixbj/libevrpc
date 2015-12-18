/***************************************************************************
 *
 * Copyright (c) 2015 aishuyu, Inc. All Rights Reserved
 *
 **************************************************************************/



/**
 * @file test_libev_tp.cpp
 * @author aishuyu(asy5178@163.com)
 * @date 2015/12/13 22:51:29
 * @brief
 *
 **/

#include <string>

#include "../libev_thread_pool.h"

using namespace libevrpc;
using std::string;

typedef struct {
    string cc;
} TS;

void* RpcCallTest(void *arg) {
    TS* ts = (TS*)arg;
    if (NULL != ts) {
        printf("Test ts %s\n", ts->cc.c_str());
    }
}

int main() {
    LibevThreadPool ltp;
    ltp.Start();
    TS ts;
    ts.cc = "call 1";
    ltp.DispatchRpcCall(RpcCallTest, &ts);

    TS ts2;
    ts2.cc = "call ****2";
    ltp.DispatchRpcCall(RpcCallTest, &ts2);

    TS ts3;
    ts3.cc = "call ****3";
    ltp.DispatchRpcCall(RpcCallTest, &ts3);

    TS ts4;
    ts4.cc = "call ****4";
    ltp.DispatchRpcCall(RpcCallTest, &ts4);

    return 0;
}





/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
