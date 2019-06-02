#include <ros/ros.h>
#include "hsr_grab_operation.h"

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "hsr_grab_operation");
    ros::NodeHandle n;

    hsr_grab_operation s;
    s.grab_init(n);
    ros::spin();
    return 0;
}