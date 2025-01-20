ifconfig | grep ether | sed -e 's/^[ \t]*//' | cut -d ' ' -f 2
