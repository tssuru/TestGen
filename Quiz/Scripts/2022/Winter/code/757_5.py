try:
    
    a,b,c=9,8,7
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(b=4,c=3,1)
    print(a,b,c)
    
except: print('error')
