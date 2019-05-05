#include <ros/ros.h>
#include "uwb_msgs/UwbSignal.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "uwb_publisher");
    ros::NodeHandle nh;

    ros::Publisher uwb_message_pub = nh.advertise<uwb_msgs::UwbSignal>("uwb_message", 100);
    ros::Rate loop_rate(1);

    uwb_msgs::UwbSignal msg;

    while(ros::ok()){
        uwb_message_pub.publish(msg);
        loop_rate.sleep();
    }

    return 0;
}