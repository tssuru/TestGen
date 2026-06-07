try:
    
    a,b,c=8,9,7
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(1,c=2,b=4)
    print(a,b,c)
    
except: print('error')
