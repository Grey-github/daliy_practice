#!/usr/bin/env python
# coding=utf-8
import os
import time

#1. 需要备份的文件与目录将被
#指定在一个列表中
#例如在Windows下：
#source = ['"C:\\My Documents"', 'C:\\Code']
#又例如在Mac OS X 与Linux下：
source = ['/home/grey/Documents/Programm/C++_practise']
#在这里要注意到我们必须在字符串中使用双引号
#用以栝起其中包括空格的名称


#2. 备份文件必须储存在一个
#主备份目录中
#例如在Windows下：
#target_dir = 'E:\\Backup'
#又例如在 Mac OS X 和 Linux下：
target_dir = '/home/grey/Documents/Programm/python_practise/A_Byte_of_Python/backup_file'
#要记得将这里的目录地址修改至你将使用的路径


#3. 备份文件将打包压缩成zip文件
#4. zip压缩文件的文件名由当前日期与时间构成。
target = target_dir + os.sep + \
        time.strftime('%Y%m%d%H%M%S') + '.zip'


#如果目标目录还不存在，则进行创建
if not os.path.exists(target_dir):
    os.mkdir(target_dir) #创建目录


#5. 我们使用zip命令将文件打包成zip格式
zip_command = 'zip -r {0} {1}'.format(target,
                                        ' '.join(source))


#运行备份
print('Zip command is:')
print(zip_command)
print('Running:')
if os.system(zip_command) == 0:
    print('Successful backup to', target)
else:
    print('Backup FAILED')


