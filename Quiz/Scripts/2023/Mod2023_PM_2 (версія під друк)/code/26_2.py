try:
    a,b,c=2,9,7
    def h(b):
        global c
        a=5
        b-=2
        c=3
        return a+b+c
    
    a,b,c=1,2,9
    print(h(b),a,b,c)
    
except: print('error')
