#ifndef DATE_H
#define DATE_H

class Date {
    protected:
        int year;
        int month;
        int day;
    
    public:
        Date(int year, int month, int day);
        void display_date() const;
};

#endif