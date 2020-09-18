for (int i = 0; i < N; i++)
    {
        if ( ktSNT( Arr[i] ))
        {
            Insert_X( Arr, N, i, X);
            if ( ktSNT( X ))
            {
                i++;
            }
            
        }
    }