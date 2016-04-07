#! /bin/bash

for i in `seq 4`; do
    GLOG_logtostderr=1 ./client.bin &
done

