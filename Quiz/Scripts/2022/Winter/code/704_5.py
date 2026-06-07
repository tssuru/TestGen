try:
    
    a,b,c=8,6,7
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(4,5)
    print(a,b,c)
    
except: print('error')
