try:
    for a in range(7,7+2,2):
        if a<=4:
            continue
        print(a, end=' ')
        a=1
    else:
        print(13, end=' ')
    print(a, end=' ')
    
except: print('error')
