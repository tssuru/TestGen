try:
    
    a,b,c=8,6,9
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(4,1,3)
    print(a,b,c)
    
except: print('error')
