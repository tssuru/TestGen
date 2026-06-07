try:
    
    a,b,c=9,6,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(2,3,b=0)
    print(a,b,c)
    
except: print('error')
