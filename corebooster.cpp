#include<iostream>
#include <unistd.h>
using namespace std;

void ultraMode(){
  system("sudo chmod 777 /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu1/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu2/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu3/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu4/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu5/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu6/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu7/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu1/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu2/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu3/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu4/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu5/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu6/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu7/cpufreq/scaling_governor");
  system("sudo echo 11 > /sys/devices/system/cpu/cpufreq/ondemand/up_threshold");
}

void normalMode(){
  system("sudo chmod 777 /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu1/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu2/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu3/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu4/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu5/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu6/cpufreq/scaling_governor");
  system("sudo chmod 777 /sys/devices/system/cpu/cpu7/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu0/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu1/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu2/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu3/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu4/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu5/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu6/cpufreq/scaling_governor");
  system("sudo echo ondemand > /sys/devices/system/cpu/cpu7/cpufreq/scaling_governor");
  system("sudo echo 95 > /sys/devices/system/cpu/cpufreq/ondemand/up_threshold");
}
#define ULTRA ultraMode();
#define NORMAL normalMode();
int main(){
  cout << "Welcome to the CoreBooster v1.0" << '\n';
  if (geteuid() != 0) {
  cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";
  cout << "PLEASE GRANT ROOT PRIVILIGES AND RESTART THE COREBOOSTER\n";
  }else {
  cout << "Modes:" << '\n';
  usleep(1000000/2);
  cout << "Ultra :(0)" << '\n';
  usleep(1000000/2);
  cout << "Normal :(1)" << '\n';
string abc;
cin >> abc;
if (abc=="0") {
ULTRA
}
if (abc=="1") {
NORMAL
}
}
  return 0;
}