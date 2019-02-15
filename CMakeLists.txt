cmake_minimum_required(VERSION 3.12)
project(QtEmbedded)

set(CMAKE_CXX_STANDARD 14)

#Qt
set(QT_HOME "D:/Qt/Qt5.12.1/5.12.1/msvc2015_64")        #对应的Qt的安装目录
set(CMAKE_PREFIX_PATH ${QT_HOME})
SET(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# 自动调用moc，uic，rcc处理qt的扩展部分
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

###这里根据Project的实际情况来添加需要的模块
#find_package(Qt5 REQUIRED Core Widgets UiTools Xml Network Qml Quick)
find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Gui CONFIG REQUIRED)
find_package(Qt5Widgets CONFIG REQUIRED)

set(QtEmbedded_SRCS
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

# 这里需要注意，如果你的Projetc中包含了qrc文件，则必须要将该qrc文件也加进来
# add_executable(QtQick_0 ${SOURCE_FILES} qml.qrc)
add_executable(QtEmbedded WIN32 ${QtEmbedded_SRCS})

# TODO 指定dll路径，当前解决方案是将dll放到exe同级目录下
target_link_libraries(QtEmbedded Qt5::Core Qt5::Gui Qt5::Widgets)
