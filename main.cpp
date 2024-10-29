#include "file_transfer/FileSendingTask.h"
#include "data_collection/DataCollectionTask.h"
#include "shared/SharedQueue.h"
#include "data_process/ProcessingTask.h"

std::string server = "tstit.x3322.net";
int port = 12345;

int main()
{

    // 创建并启动数据采集线程
    std::thread dataCollectionThread(dataCollectionTask);
    // 创建并启动文件发送线程
    std::thread fileSenderThread(fileSendingTask, server, port);
    std::thread processingThread(ProcessingTask);

    

    // // 测试时使用，持续10s
    // bool testFlag = true;
    // int testTime = 2;
    // while (testFlag)
     while (true){}
    // {
    //     std::cout << "main() running 10s main() Programme" << std::endl;

    //     std::this_thread::sleep_for(std::chrono::seconds(5)); // 主线程每5秒打印一次检测结果
    //     /*
    //      * std::this_thread::sleep_for:使当前线程暂停执行指定的时间段
    //      * std::chrono::seconds(5)：这是<chrono>头文件中的一个时间长度表示，表示5秒的时间间隔。
    //      * std::chrono命名空间提供了表示时间间隔和时钟的时间单位。
    //      */
    //     // 测试时使用，持续10s
    //     testTime--;
    //     if (0 == testTime)
    //     {
    //         std::cout << "Main Program is ending ! 10s Arrived !" << std::endl;
    //         testFlag = false;
    //         std::cout << "Main Program is waiting for 5 seconds to Stop ! " << std::endl;
    //         std::this_thread::sleep_for(std::chrono::seconds(5));
    //         std::cout << "5 seconds to Over ! " << std::endl;
    //     }
    // }

    cKeepRunning = false;
    dataCollectionThread.join();
    fileSenderThread.join();
    processingThread.join();
 
    return 0;
}
