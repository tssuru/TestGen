try:
    
    a,b,c=7,8,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(1,0)
    print(a,b,c)
    
except: print('error')
