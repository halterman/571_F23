class Bar {
    int length;  //  Current bar length 
    int limit;   //  Maximum possible length
public:
    Bar(int max): length(0), limit(max)  {}
    void set_length(int len) {
        if (len <= limit) //  Do not exceed
            length = len; //  maximum length
    }
    int get_length() const {
        return length;
    }
    int get_limit() const {
        return limit;
    }
};

