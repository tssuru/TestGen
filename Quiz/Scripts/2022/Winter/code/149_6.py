try:
    a,b,c=1,2,9
    def h(a):
        a=2
        b-=3
        c=1
        return a+b+c
    
    a,b,c=5,6,8
    print(h(b),a,b,c)
    
except: print('error')
