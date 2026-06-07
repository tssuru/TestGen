try:
    for e in range(-1,-1+2,2):
        if e<3:
            break
        print(e, end=' ')
        e=-10
        if e>3:
            break
    else:
        print(e, end=' ')
    print(e, end=' ')
except: print('error')
