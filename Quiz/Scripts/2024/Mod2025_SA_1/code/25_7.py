try:
    def g(b):
        y=92
        if b!=2: 
            return 7
        if b<=-2:
             y=8
        else:
             return 1
        return y
    
    print(g(-1))
except: print('error')
