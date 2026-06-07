try:
    for e in range(-6, -4):
        if e > -5:
            continue
            print(e, end=' ')
        if e > -4:
            break
    else:
        print('end', end=' ')
    print(e, end=' ')
    
except: print('error')
