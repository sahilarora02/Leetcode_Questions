class SeatManager {
public:
    set<int> unreserved;
    int n;
    
    SeatManager(int total) {
        n= total;
        unreserved.insert(1);
    }
    
    
    int reserve() {
        int seat= *unreserved.begin();
        unreserved.erase(seat);
        if(unreserved.size()==0 && (seat+1) <= n)unreserved.insert(seat+1);
        return seat;
    }
    
    
    void unreserve(int seatNumber) {
        unreserved.insert(seatNumber);
    }
};