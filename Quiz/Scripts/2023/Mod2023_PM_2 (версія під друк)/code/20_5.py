try:
    for f in range(6,6+3,3):
        if f>5:
            continue
        print(f, end=' ')
        f=-10
    else:
        print(13, end=' ')
    print(f, end=' ')
    
except: print('error')
