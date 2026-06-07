try:
    a,b,c=4,2,9
    def h(a):
        global c
        a+=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=3,7,0
    print(h(b),a,b,c)
    
except: print('error')
