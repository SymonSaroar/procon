#!/usr/bin/awk -f
$0=$1==$2?$3:$2==$3?$1:$2
