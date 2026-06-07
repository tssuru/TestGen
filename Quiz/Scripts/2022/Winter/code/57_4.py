try:
    def h(c):
        y=39
        if c: 
            y=9
        elif c<4:
             return 4
        else:
             return 7
        return y
    
    print(h(-1))
    
except: print('error')
