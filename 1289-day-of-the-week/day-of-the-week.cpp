class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> days = {
            "Sunday", "Monday", "Tuesday",
            "Wednesday", "Thursday", "Friday", "Saturday"
        };

      
        int totalDays = 0;

       
        for (int y = 1971; y < year; y++) {
            totalDays += isLeap(y) ? 366 : 365;
        }

        
        vector<int> months = {
            31,28,31,30,31,30,
            31,31,30,31,30,31
        };

       
        for (int m = 1; m < month; m++) {
            totalDays += months[m - 1];

            if (m == 2 && isLeap(year)) {
                totalDays++;
            }
        }

        
        totalDays += day;

       
        return days[(totalDays + 4) % 7];
    }

    bool isLeap(int year) {
        return (year % 400 == 0) || 
               (year % 4 == 0 && year % 100 != 0);
    }
};