try:
    def h(b):
        x=25
        if b: 
            x=8
        if b<=-1:
             return 1
        else:
             x=1
        return x
    
    print(h(-1))
    
except: print('error')
