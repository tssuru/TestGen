try:
    def g(b):
        z=21
        if b<=4: 
            return 6
        elif b>=2:
             z=0
        else:
             return 2
        return z
    
    print(g(-7))
    
except: print('error')
