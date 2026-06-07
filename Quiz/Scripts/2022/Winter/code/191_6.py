try:
    a,b,c=0,8,3
    def h(b):
        global c
        a*=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=4,9,5
    print(h(b),a,b,c)
    
except: print('error')
