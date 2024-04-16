#pragma once

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <future>
#include <optional>
#include <cmath>

#include "tab.h"
#include "general_data.h"
#include "colors.h"



class TabsManager {
    struct Animation {
        size_t from, to;
        std::chrono::time_point<std::chrono::steady_clock> beg, end;
    };

public:
    TabsManager(Tab &&win)
        : tabs_(std::move(win))
    {}

    void Start();

private:
    Tab tabs_;
};
