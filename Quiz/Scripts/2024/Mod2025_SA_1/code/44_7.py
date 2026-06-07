try:
    def g(b):
        y=35
        if b: 
            y=7
        if b>-1:
             return 4
        else:
             y=9
        return y
    
    print(g(6))
except: print('error')
