try:
    
    a,b,c=6,8,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(5,c=0,b=5)
    print(a,b,c)
    
except: print('error')
