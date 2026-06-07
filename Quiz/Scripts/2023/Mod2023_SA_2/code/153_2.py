try:
    a,b,c=6,4,2
    def h(a):
        global c
        a=5
        b*=3
        c=4
        return a+b+c
    
    a,b,c=5,7,3
    print(h(b),a,b,c)
    
except: print('error')
