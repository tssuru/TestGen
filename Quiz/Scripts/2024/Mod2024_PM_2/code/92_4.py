try:
    for e in range(6,6+5,-2):
        if e<5:
            pass
        print(e, end=' ')
        e=-9
        if e<3:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
    
except: print('error')
