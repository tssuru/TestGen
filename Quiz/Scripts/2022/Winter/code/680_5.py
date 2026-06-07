try:
    
    a,b,c=7,8,9
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(5,2,1)
    print(a,b,c)
    
except: print('error')
