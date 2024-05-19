#ifndef PROCESS_H
#define PROCESS_H

#include <string>
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
public:
    Process(int pid);
    int Pid() const;                               // TODO: See src/process.cpp
    std::string User() const;                      // TODO: See src/process.cpp
    std::string Command() const;                   // TODO: See src/process.cpp
    float CpuUtilization() const;                  // TODO: See src/process.cpp
    void CpuUtilization(long active_jiffies, long jiffies);
    std::string Ram() const;                       // TODO: See src/process.cpp
    long int UpTime() const;                       // TODO: See src/process.cpp
    bool operator>(Process const& a) const;  // TODO: See src/process.cpp

// TODO: Declare any necessary private members
private:
    int pid;
    float cpu_utilization = 0;
    long active_jiffies = 0;
    long jiffies = 0;
};

#endif