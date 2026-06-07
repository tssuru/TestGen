try:
    for e in range(8,8+2,-2):
        if e<8:
            pass
        print(e, end=' ')
        e=7
        if e<=3:
            break
    else:
        print(13, end=' ')
    print(e, end=' ')
    
except: print('error')
