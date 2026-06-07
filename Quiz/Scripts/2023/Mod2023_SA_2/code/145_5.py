try:
    for e in range(3,3+4,-3):
        if e<=7:
            continue
        print(e, end=' ')
        e=-5
    else:
        print(13, end=' ')
    print(e, end=' ')
    
except: print('error')
