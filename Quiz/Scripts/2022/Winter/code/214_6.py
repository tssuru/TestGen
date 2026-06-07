try:
    a,b,c=9,8,7
    def h(b):
        a=2
        b*=5
        c=4
        return a+b+c
    
    a,b,c=3,1,4
    print(h(b),a,b,c)
    
except: print('error')
