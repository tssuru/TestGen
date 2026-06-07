try:
    a,b,c=6,0,7
    def h(a):
        global c
        a+=3
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,3,6
    print(h(b),a,b,c)
    
except: print('error')
