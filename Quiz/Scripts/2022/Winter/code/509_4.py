try:
    def f(c):
        y=39
        if c: 
            y=1
        elif c!=5:
             return 7
        else:
             y=4
        return y
    
    print(f(-7))
    
except: print('error')
