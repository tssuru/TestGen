try:
    for d in range(8,8+4,2):
        if d<=5:
            continue
        print(d, end=' ')
        d=6
    else:
        print(13, end=' ')
    print(d, end=' ')
    
except: print('error')
