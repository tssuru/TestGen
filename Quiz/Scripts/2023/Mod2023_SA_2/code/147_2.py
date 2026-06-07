try:
    a,b,c=3,4,9
    def h(a):
        global c
        a=3
        b*=5
        c=4
        return a+b+c
    
    a,b,c=1,5,0
    print(h(b),a,b,c)
    
except: print('error')
