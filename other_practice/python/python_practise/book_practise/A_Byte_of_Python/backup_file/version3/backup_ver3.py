#!/usr/bin/env python
# coding=utf-8
import os
import time

#1. 需要备份的文件和目录将被
#指定在一个列表中
#例如在Windows下：
#source = ['"C:\\My Documents"', 'C"\\Code']
#又例如在Mac OS X 与 Linux 下：
source = ['/home/grey/Documents/Programm/C++_practise']
#在这里早注意到我们必须在字符串中使用双引号
#用以括起其中包含空格的名称


#2. 备份文件必须存储在一个
#主备份目录中
#例如在Windows下：
#target_dir = 'E:\\Backup'
#又例如在Mac OS X 和 Linux下：
target_dir = '/home/grey/Documents/Programm/python_practise/A_Byte_of_Python/backup_file/version3'
#要记得将这里的目录地址修改至你将使用的路径


#如果目标目录还不存在，则进行创建
if not os.path.exists(target_dir):
    os.mkdir(target_dir)#创建目录


#3. 备份文件将打包压缩成zip文件
#4. 将当前日期作为主备份目录下的子目录名称
today = target_dir + os.sep + time.strftime('%Y%m%d')
#将当前时间作为zip文件的文件名
now = time.strftime('%H%M%S')


#添加一条来自用户的注释以创建
#zip文件的文件名
comment = input('Enter a comment --> ')
#检查是否与评论键入
if len(comment) == 0:
    target = today + os.sep + now + '.zip'
else:
    target = today + os.sep + now + '_' +\
        comment.replace(' ', '_') + '.zip'


#如果子目录尚不存在则创建一个
if not os.path.exists(today):
    os.mkdir(today)
    print('Successfully created directory', today)


#5. 我们使用zip命令将文件打包成zip格式
zip_command = "zip -r {0} {1}".format(target, 
                                        ' '.join(source))


#运行备份
print('Zip command is:')
print(zip_command)
print("Running:")
if os.system(zip_command) == 0:
    print('Successful backup to', target)
else:
    print('Backup FAILED')

