try:
    
    a,b,c=8,6,7
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(5,0,1)
    print(a,b,c)
    
except: print('error')
