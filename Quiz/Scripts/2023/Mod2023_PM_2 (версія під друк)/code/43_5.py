try:
    for e in range(8,8+4,-3):
        if e<7:
            continue
        print(e, end=' ')
        e=-3
    else:
        print(13, end=' ')
    print(e, end=' ')
    
except: print('error')
