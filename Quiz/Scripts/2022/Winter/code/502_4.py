try:
    def f(d):
        x=45
        if d!=3: 
            x=2
        if d<=2:
             return 6
        else:
             x=4
        return x
    
    print(f(9))
    
except: print('error')
