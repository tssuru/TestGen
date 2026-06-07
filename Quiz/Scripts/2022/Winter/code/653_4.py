try:
    def g(b):
        v=89
        if b>=0: 
            v=6
        if b<=5:
             return 0
        else:
             v=8
        return v
    
    print(g(6))
    
except: print('error')
