ifconfig -a|awk '/netmask/{print $4}'
