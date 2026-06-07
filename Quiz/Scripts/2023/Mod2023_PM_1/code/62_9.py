try:
    a,b,c=3,0,4
    def h(a):
        a=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=9,5,3
    print(h(b),a,b,c)
    
except: print('error')
