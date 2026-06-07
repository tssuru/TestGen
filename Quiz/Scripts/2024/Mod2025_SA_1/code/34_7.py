try:
    def g(b):
        y=43
        if b<=-2: 
            y=6
        elif b==3:
             y=2
        else:
             return 5
        return y
    
    print(g(1))
except: print('error')
