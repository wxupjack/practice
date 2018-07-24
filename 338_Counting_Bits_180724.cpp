class Solution {
    public:
    vector<int> countBits(int num) {
        vector<int> result(num + 1, 0);

        int layer = 1;
        while (pow(2, layer)<=num)
            layer++;
        f(result, layer-1, 0, num);

        return result;
    }

    void f(vector<int> &result, int layer, int start, int end) {
        if (start + pow(2, layer) <= end) {
            result[start + pow(2, layer)] = result[start] + 1;
            if (layer == 0) return;
            f(result, layer - 1, start, start + pow(2, layer) - 1);
            f(result, layer - 1, start + pow(2, layer), end);
        }
        else {
            if (layer == 0) return;
            f(result, layer - 1, start, end);
        }
    }
};