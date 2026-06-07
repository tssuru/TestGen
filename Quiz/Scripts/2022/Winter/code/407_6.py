try:
    a,b,c=2,5,0
    def h(b):
        a=4
        b*=2
        c=5
        return a+b+c
    
    a,b,c=1,4,3
    print(h(b),a,b,c)
    
except: print('error')
