try:
    for a in range(5,5+3,3):
        if a<=4:
            continue
        print(a, end=' ')
        a=0
    else:
        print(a, end=' ')
    print(a, end=' ')
    
except: print('error')
