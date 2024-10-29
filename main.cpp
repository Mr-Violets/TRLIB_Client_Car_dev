#include "file_transfer/FileSendingTask.h"
#include "data_collection/DataCollectionTask.h"
#include "shared/SharedQueue.h"
#include "data_process/ProcessingTask.h"

std::string server = "tstit.x3322.net";
int port = 12345;

int main()
{

    // �������������ݲɼ��߳�
    std::thread dataCollectionThread(dataCollectionTask);
    // �����������ļ������߳�
    std::thread fileSenderThread(fileSendingTask, server, port);
    std::thread processingThread(ProcessingTask);

    

    // // ����ʱʹ�ã�����10s
    // bool testFlag = true;
    // int testTime = 2;
    // while (testFlag)
     while (true){}
    // {
    //     std::cout << "main() running 10s main() Programme" << std::endl;

    //     std::this_thread::sleep_for(std::chrono::seconds(5)); // ���߳�ÿ5���ӡһ�μ����
    //     /*
    //      * std::this_thread::sleep_for:ʹ��ǰ�߳���ִͣ��ָ����ʱ���
    //      * std::chrono::seconds(5)������<chrono>ͷ�ļ��е�һ��ʱ�䳤�ȱ�ʾ����ʾ5���ʱ������
    //      * std::chrono�����ռ��ṩ�˱�ʾʱ������ʱ�ӵ�ʱ�䵥λ��
    //      */
    //     // ����ʱʹ�ã�����10s
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
