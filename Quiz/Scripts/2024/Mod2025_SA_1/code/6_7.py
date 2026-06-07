try:
    def g(b):
        y=70
        if b: 
            y=5
        elif b>=2:
             return 4
        else:
             return 2
        return y
    
    print(g(-8))
except: print('error')
