try:
    def g(b):
        x=38
        if b>4: 
            x=6
        if b<=1:
             return 4
        else:
             return 8
        return x
    
    print(g(3))
    
except: print('error')
