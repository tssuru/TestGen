try:
    
    a,b,c=6,8,7
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(4,0)
    print(a,b,c)
    
except: print('error')
