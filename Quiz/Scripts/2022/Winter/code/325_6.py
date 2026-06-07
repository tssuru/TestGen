try:
    a,b,c=8,3,2
    def h(a):
        global c
        a+=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=6,5,7
    print(h(b),a,b,c)
    
except: print('error')
