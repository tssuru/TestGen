try:
    
    a,b,c=7,8,9
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(5,b=2)
    print(a,b,c)
    
except: print('error')
