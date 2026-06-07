try:
    def g(b):
        x=81
        if b: 
            x=9
        elif b>=5:
             x=1
        else:
             return 8
        return x
    
    print(g(4))
    
except: print('error')
