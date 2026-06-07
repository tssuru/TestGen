try:
    
    a,b,c=8,9,7
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(3,4,b=1)
    print(a,b,c)
    
except: print('error')
