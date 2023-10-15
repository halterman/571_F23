class Counter {
    int current_value;
    Bar *bar;    //  Counter depends on Bar
public:
    Counter(Bar *b) : current_value(0), bar(b) {}
    int get() const {
        return current_value;
    }
    void inc() {   //  Increment
        bar->set_length(++current_value);
    }
    void dec() {   //  Decrement
        if (current_value > 0)
            bar->set_length(--current_value);
    }
};

