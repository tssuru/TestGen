try:
    a,b,c=5,4,0
    def h(a):
        global c
        a+=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,2,6
    print(h(b),a,b,c)
    
except: print('error')
