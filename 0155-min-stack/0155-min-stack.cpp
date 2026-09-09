class MinStack {
public:
    stack<long long> st;   // use long long
    long long minVal;      // also long long

    MinStack() {}

    void push(int val) {
        long long v = val;  // promote to long long
        if(st.empty()) {
            st.push(v);
            minVal = v;
        }
        else if(v < minVal) {
            st.push(2*v - minVal); // safe
            minVal = v;
        }
        else {
            st.push(v);
        }
    }

    void pop() {
        if(st.empty()) return;
        long long x = st.top();
        st.pop();
        if(x < minVal) {
            minVal = 2*minVal - x;
        }
    }

    int top() {
        if(st.empty()) return -1;
        long long x = st.top();
        if(x < minVal) return (int)minVal;
        return (int)x;
    }

    int getMin() {
        return (int)minVal;
    }
};
