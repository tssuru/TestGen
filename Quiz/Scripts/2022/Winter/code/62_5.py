try:
    
    a,b,c=9,8,7
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(c=4,b=1,c=2)
    print(a,b,c)
    
except: print('error')
