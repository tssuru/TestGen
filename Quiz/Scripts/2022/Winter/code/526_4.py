try:
    def f(b):
        x=90
        if b!=-1: 
            x=4
        elif b<=1:
             x=1
        else:
             return 5
        return x
    
    print(f(4))
    
except: print('error')
