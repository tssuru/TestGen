try:
    for e in range(6,6+3,-3):
        if e<7:
            continue
        print(e, end=' ')
        e=-6
    else:
        print(13, end=' ')
    print(e, end=' ')
    
except: print('error')
