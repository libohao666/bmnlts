#########################################################################
# File Name: gitup.sh
# Author: lbh
# mail: 2052658718@qq.com
# Created Time: 2019年12月28日 星期六 15时49分00秒
#########################################################################
#!/bin/bash
git add *
git commit -m $(date "+%Y%m%d")
git push origin master
