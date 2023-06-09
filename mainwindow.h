﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include "listwidget.h"
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//播放器界面
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initplayer();  //界面和逻辑初始化设置
    void voiplay(); //实现音乐和按钮转换
    void voipause(); //实现暂停和按钮转换
    void voistop();  //实现停止

protected:
//    void mouseMoveEvent(QMouseEvent *event); //鼠标拖动窗体时隐藏歌单，拖动完成后在显示
//    void mousePressEvent(QMouseEvent *event);
//    void mouseReleaseEvent(QMouseEvent *event);


private slots:    
    void on_pushButton_4_clicked(); //一个按键实现播放暂停两个操作
    void on_pushButton_clicked();   //打开对话框选取特定的音乐文件并播放

private slots:
    void on_verticalSlider_sliderMoved(int position);   //鼠标滚轮上下滚动实现音量调节
    void on_toolButton_clicked();                       //静音
    void updatePosition(qint64 position);
    void updateDuration(qint64 duration);

    void on_horizontalSlider_sliderReleased();

    void on_lasttoolButton_clicked();       //上一首
    void on_nexttoolButton_clicked();       //下一首

    void on_toolButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *voi;  //播放器指针
    QMediaPlaylist *voilist;    //播放菜单指针    
    ListWidget *list;    //歌单窗口
    int volume = 100;   //初始音量为100%
    QString durationTime;   //当前歌曲总时长
    QString positionTime;   //当前歌曲播放时长
//按键用ui生成了这里不显示，布局也是用ui布局

};
#endif // MAINWINDOW_H
