try:
    a,b,c=1,0,6
    def h(a):
        a=3
        b*=3
        c=5
        return a+b+c
    
    a,b,c=0,5,8
    print(h(b),a,b,c)
    
except: print('error')
