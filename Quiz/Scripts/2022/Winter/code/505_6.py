try:
    a,b,c=8,0,3
    def h(a):
        global c
        a=5
        b+=3
        c=4
        return a+b+c
    
    a,b,c=4,9,2
    print(h(b),a,b,c)
    
except: print('error')
