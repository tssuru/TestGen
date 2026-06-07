try:
    a,b,c=3,8,2
    def h(a):
        a=5
        b-=2
        c=3
        return a+b+c
    
    a,b,c=7,5,6
    print(h(b),a,b,c)
    
except: print('error')
