try:
    def f(d):
        z=90
        if d!=4: 
            z=1
        if d<3:
             return 9
        else:
             z=0
        return z
    
    print(f(3))
    
except: print('error')
