try:
    a,b,c=3,6,4
    def h(b):
        a+=1
        b=5
        c=2
        return a+b+c
    
    a,b,c=2,5,1
    print(h(b),a,b,c)
    
except: print('error')
