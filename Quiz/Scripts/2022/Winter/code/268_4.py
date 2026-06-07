try:
    def g(b):
        v=29
        if b<=1: 
            v=1
        elif b==0:
             return 5
        else:
             return 6
        return v
    
    print(g(5))
    
except: print('error')
