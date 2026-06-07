try:
    def h(b):
        x=63
        if b<0: 
            x=9
        if b>=1:
             return 8
        else:
             x=1
        return x
    
    print(h(5))
    
except: print('error')
