#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pre_fetch_count = 2, queue_size = 5, result_count = 9;

    if ((queue_size + 9) < pre_fetch_count || (queue_size + pre_fetch_count) < pre_fetch_count)
        result_count = (pre_fetch_count + pre_fetch_count) + queue_size;

    else
        pre_fetch_count = result_count + pre_fetch_count;

    result_count = queue_size + pre_fetch_count;
    cout << pre_fetch_count + queue_size + result_count << endl;
    return 0;
}