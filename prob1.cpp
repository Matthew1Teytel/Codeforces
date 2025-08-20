   int n;
    cin>>n;
    int i=0;
    if(n%3==2){
        cout<<"NO\n";
        return;
    }
    char x;
    char x1;
    while(i<n){
        cin>>x;
        i++;
        if (i%3==2){
            cin>>x1;
            i++;
            debug(x);
            if (x1!=x){
                cout<<"NO\n";
                return;
            }
        }

    }
    cout<<"YES\n";



