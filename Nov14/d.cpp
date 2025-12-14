  long long a, b;
    cin >> a >> b;

    int limit = sqrt(b) + 1;
    vector<long long> A(limit + 1, 1);
    vector<long long> B(b - a + 1, 1);

    A[0] = A[1] = 0;

    for (long long i = 2; i * i <= b; i++)
    {
        if (A[i])
        {
            for (long long j = i * i; j <= limit; j += i)
                A[j] = 0;
            for (long long j = max(1LL * i * i, (long long)((a + i - 1) / i) * i); j <= b; j += i)
                B[j - a] = 0;
        }
    }

    if (a == 1)
        B[0] = 0;

    long long last = -1;
    long long maxs = -1;
    long long mins = pow(2,31)-1;
    long long maxl = -1, maxr = -1;
    long long minl = -1, minr = -1;

    for (long long i = a; i <= b; ++i)
    {
        if (B[i - a])
        {
            if (last != -1)
            {
                long long d = i - last;
                if (d > maxs)
                {
                    maxs = d;
                    maxl = last;
                    maxr = i;
                }
                if (d < mins)
                {
                    mins = d;
                    minl = last;
                    minr = i;
                }
            }
            last = i;
        }
    }

    if (maxs == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minl << " " << minr<< " ";
        cout << maxl << " " << maxr << endl;
    }

    return 0;