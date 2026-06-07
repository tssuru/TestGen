try:
    
    a,b,c=6,8,9
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(3,c=5)
    print(a,b,c)
    
except: print('error')
