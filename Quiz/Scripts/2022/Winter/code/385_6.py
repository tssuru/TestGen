try:
    a,b,c=3,7,5
    def h(b):
        global c
        a*=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,4,1
    print(h(b),a,b,c)
    
except: print('error')
