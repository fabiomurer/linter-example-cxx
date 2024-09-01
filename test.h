#pragma once

// clang-tidy default not checking header files

class IDummy {
public:
    virtual void dummy() = 0;
};

class Test : public IDummy {
public:
    void dummy();
};
