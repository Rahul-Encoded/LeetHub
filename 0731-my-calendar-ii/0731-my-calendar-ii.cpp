class MyCalendarTwo {
public:
    vector<pair<int, int>> bookings;
    vector<pair<int, int>> doubleBookings;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(auto booking: doubleBookings){
            if(max(booking.first, start) < min(booking.second, end)){
                return false;
            }
        }

        for(auto booking: bookings){
            if(max(booking.first, start) < min(booking.second, end)){
                doubleBookings.push_back({max(booking.first, start), min(booking.second, end)});
            }
        }

        bookings.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */