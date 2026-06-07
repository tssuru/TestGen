try:
    a,b,c=6,4,1
    def h(a):
        global c
        a-=5
        b=4
        c=2
        return a+b+c
    
    a,b,c=7,5,9
    print(h(b),a,b,c)
    
except: print('error')
