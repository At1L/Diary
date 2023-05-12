#pragma once
#include "pch.h"
class Task  
{
private:
    std::string TaskName;  
    std::string TaskDescription;  
    //date
    int day, month, year; 
    //time
    int minute, hour;
public:
    //void task construct
    Task()
    {
    }
    //full new Task construct
    Task(std::string NewTaskName, std::string NewTaskDescription,
        int NewDay, int NewMonth, int NewYear, int NewMinute, int NewHour)
    {
        TaskName = NewTaskName;
        TaskDescription = NewTaskDescription;
        day = NewDay;
        month = NewMonth;
        year = NewYear;
        minute = NewMinute;
        hour = NewHour;
    }
    //setters block
    void SetNewName(std::string NewTaskName)
    {
        TaskName = NewTaskName;
    }
    void SetNewDescription(std::string NewTaskDescription) 
    {
        TaskDescription = NewTaskDescription;
    }
    void SetNewDay(int NewDay)
    {
        day = NewDay; 
    }
    void SetNewMonth(int NewMonth) 
    {
        month = NewMonth; 
    }
    void SetNewYear(int NewYear)
    {
        year = NewYear;
    }
    void SetNewMinute(int NewMinute)
    {
        minute = NewMinute;
    }
    void SetNewHour(int NewHour)
    {
        hour = NewHour;
    }
    //getters block
    std::string GetTaskName() 
    {
        return TaskName;
    }
    std::string GetTaskDescription()
    {
        return TaskDescription; 
    }
    int GetTaskDay()
    {
        return day; 
    }
    int GetTaskMonth()
    {
        return month;
    }
    int GetTaskYear()
    {
        return year;
    }
    int GetTaskMinute()
    { 
        return minute; 
    }
    int GetTaskHour()
    {
        return hour; 
    }
};