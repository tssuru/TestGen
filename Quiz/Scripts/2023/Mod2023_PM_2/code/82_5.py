try:
    for a in range(7,7+6,3):
        if a<5:
            continue
        print(a, end=' ')
        a=3
    else:
        print(13, end=' ')
    print(a, end=' ')
    
except: print('error')
