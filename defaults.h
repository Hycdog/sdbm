#ifndef DEFAULTS_H
#define DEFAULTS_H
//#include<QString>
#include <map>
#include <QString>
#include <QColor>
#define HOST_DEFAULT "localhost"
#define PORT_DEFAULT "3306"
#define DB_DEFAULT "school"
#define USER_DEFAULT "root"
static std::map<QString, QString> _MAPPER = {
    {"xh","学号"},
    {"xm","姓名"},
    {"xb","性别"},
    {"csrq","出生日期"},
    {"jg","籍贯"},
    {"sjhm","手机号"},
    {"yxh","院系号"}
};
static std::map<QString, int> _FIELD_ORDER = {
    {"xh",0},
    {"xm",1},
    {"xb",2},
    {"csrq",3},
    {"jg",4},
    {"sjhm",5},
    {"yxh",6},
    {"mc",6}
};
static std::map<QString, int> _FIELD_ORDER_GRADE = {
    {"xh",0},
    {"xq",1},
    {"km",2},
    {"xm",3},
    {"pscj",4},
    {"kscj",5},
    {"zpcj",6}
};
static QStringList _DEFAULT_HEADER ={
    "学号","姓名","性别","出生日期","籍贯","手机号","学院",
};
static QStringList _DEFAULT_HEADER_GRADE ={
    "学号","学期","课名","教师姓名","平时成绩","考试成绩","总评成绩",
};


#define FIELD_TRANSLATE(arg)  _MAPPER[QString(arg)]
#define DEFAULT_HEADER _DEFAULT_HEADER
#define DEFAULT_HEADER_GRADE _DEFAULT_HEADER_GRADE
#define FIELD_ORDER(arg) _FIELD_ORDER[QString(arg)]
#define FIELD_ORDER_GRADE(arg) _FIELD_ORDER_GRADE[QString(arg)]
#define COLOR_NAME QColor(204, 120, 50)
#define COLOR_M QColor(85, 150, 186)
#define COLOR_F QColor(148, 85, 141)
#define COLOR_OTHER QColor(106, 135, 89)





#endif // DEFAULTS_H
