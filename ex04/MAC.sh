ifconfig -a|grep netmask|awk -F 'netmask' '{print $2}'|cut -d ' ' -f2
