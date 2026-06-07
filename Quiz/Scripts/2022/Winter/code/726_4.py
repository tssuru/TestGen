try:
    def h(c):
        v=37
        if c<=4: 
            v=5
        elif c<=2:
             v=2
        else:
             return 8
        return v
    
    print(h(7))
    
except: print('error')
