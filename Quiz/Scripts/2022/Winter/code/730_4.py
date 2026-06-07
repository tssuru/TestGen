try:
    def g(b):
        y=40
        if b: 
            y=3
        elif b<1:
             return 4
        else:
             y=5
        return y
    
    print(g(-3))
    
except: print('error')
